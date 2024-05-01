#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>

#include <pcap/pcap.h>

#include "utils.h"
#include "headers.h"

void send_buf(int sockfd, char *buf, size_t n){
	int sent_bytes = 0;
	do{		
		n -= sent_bytes;
		buf += sent_bytes;		
		if((sent_bytes = send(sockfd, buf, n, 0)) == -1){
			fatal("in send_buf().");
		}	
	}while(sent_bytes != n);		
}
char *get_device(char *errbuf){//returns a ptr to the device name...memory statically allocated in the function
	static char dev_name[80];
	pcap_if_t *cur_dev;	

	if(pcap_findalldevs(&cur_dev, errbuf)){
		fatal("in pcap_findalldevs().");
	}
	printf("Select which device to use: \n");
	int t = 1, dev_num;	
	pcap_if_t *start = cur_dev;	
	while(cur_dev != NULL){
		printf("#%d: %s\nDescription: %s\n", t, cur_dev->name, cur_dev->description);
		cur_dev = cur_dev->next;
		t++;
	}
	if(scanf("%d", &dev_num) != 1)
		fatal("in scanf().");	
	if(dev_num < 1 || dev_num >= t)
		fatal("invalid selection.");
	for(t = 1; t < dev_num; t++){
		start = start->next;
	}
	strcpy(dev_name, start->name);
	pcap_freealldevs(cur_dev);	
	return dev_name;
}
void get_ip(unsigned int ip, char *str){
	unsigned char b[4]; 
	b[0] = (0xFF000000 & ip) >> 24;
	b[1] = (0x00FF0000 & ip) >> 16;
	b[2] = (0x0000FF00 & ip) >> 8;
	b[3] = (0x000000FF & ip);
	
	int end = 0;
	for(int t = 0; t < 4; t++){
		sprintf(str + end, "%d", b[t]);
		end = strlen(str);
		if(t != 3)
			str[end++] = '.';
	}
}
unsigned int calc_ip(char *str){//get ip in network byte order
	struct in_addr addr;
	if(inet_aton(str, &addr) == 0)
		fatal("in calc_ip(). Bad IP.");
	return addr.s_addr;
}
void get_mac(char *str, unsigned char *mac){//from string to char[6]
	for(int i = 0; i < 6; i++){
		if(sscanf(str + (3*i), "%2X", (unsigned int *)(mac + i)) != 1)
			fatal("in get_mac().");
	}
}
/*----------------------------------------------------------------------------------------------------------------------------*/
void build_ether(unsigned char *hdr_start, const unsigned char *dest, const unsigned char *source, const unsigned short type){
	struct ether_hdr *hdr = (struct ether_hdr *)hdr_start;
	int i;
	for(i = 0; i < 6; i++)
		hdr->dest[i] = dest[i];	
	for(i = 0; i < 6; i++)
		hdr->source[i] = source[i];
	hdr->type = htons(type);		
}
void build_arp(unsigned char *packet_start, const unsigned short opcode, const unsigned char *esource, const unsigned int ipsource, const unsigned char *edest, const unsigned int ipdest){
	struct arp_packet *pack = (struct arp_packet *)packet_start;
	pack->htype = htons(1);
	pack->ptype = htons(0x0800);
	pack->hsize = 6;
	pack->psize = 4;
	pack->opcode = htons(opcode);
	int i;
	for(i = 0; i < 6; i++)
		pack->esource[i] = esource[i];
	pack->ipsource = ipsource;//assume already in network byte order (big endian)
	for(i = 0; i < 6; i++)
		pack->edest[i] = edest[i];
	pack->ipdest = ipdest;
}
void build_ip(unsigned char *hdr_start, const unsigned short total_length, const unsigned short id, const unsigned short frag_offset, const unsigned char protocol, const unsigned int source, const unsigned int dest){
	struct ip_hdr *hdr = (struct ip_hdr *)hdr_start;
	hdr->version = 4;//IPv4	
	hdr->ihl = 5;//5 32 bit words
	hdr->tos = 0;
	hdr->total_length = htons(total_length);
	hdr->id = htons(id);
	hdr->frag_offset = htons(frag_offset);
	hdr->ttl = 64;
	hdr->protocol = protocol;
	hdr->checksum = 0;//for the purpose of computing the checksum start with 0s
	hdr->source = source;//assume already in network byte order (big endian)
	hdr->dest = dest;

	//checksum computation
	unsigned int sum = 0;
	for(int w = 0; w < 10; w++){//add each 16-bit word
		sum += *((unsigned short *) (hdr_start + (w * 2)));
	}
	while(0xFFFF0000 & sum){//add in any carry
		sum = (sum & 0x0000FFFF) + ((0xFFFF0000 & sum) >> 16);
	}
	hdr->checksum = ~((unsigned short)sum);//NOTE: no htons() used b/c data already reversed		
}
void build_udp(unsigned char *hdr_start, const unsigned short source_port, const unsigned short dest_port, const unsigned short length){
	struct udp_hdr *hdr = (struct udp_hdr *)hdr_start;
	hdr->source_port = htons(source_port);
	hdr->dest_port = htons(dest_port);
	hdr->length = htons(length);
	hdr->checksum = 0;//checksum not calculated
}
void build_udp2(unsigned char *hdr_start, const unsigned short source_port, const unsigned short dest_port, const unsigned short length, const struct pseudo_hdr *p_hdr, const char *data){
	if(length < 8)
		fatal("in build_udp2(). Length must be at least 8.");	

	struct udp_hdr *hdr = (struct udp_hdr *)hdr_start;
	hdr->source_port = htons(source_port);
	hdr->dest_port = htons(dest_port);
	hdr->length = htons(length);
	hdr->checksum = 0;	

	//checksum
	unsigned int sum = 0;
	int w = 0;
	for(w = 0; w < (sizeof(struct pseudo_hdr) / 2); w++){//add each 16-bit word in pseudo hdr
		sum += *((unsigned short *) ((unsigned char *)p_hdr + (w * 2)));
	}
	for(w = 0; w < (UDP_LEN / 2); w++){//add each 16-bit word in udp hdr
		sum += *((unsigned short *) (hdr_start + (w * 2)));
	}
	for(w = 0; w < ((length - UDP_LEN) / 2); w++){//add each 16-bit word in data except last one (if data length is odd)
		sum += *((unsigned short *)(data + (w * 2)));
	}
	if((length % 2) == 1){//odd length pad data w/ zero byte
		sum += htons(((unsigned short)data[w * 2]) << 8);		
	}
	while(0xFFFF0000 & sum){//add in any carry
		sum = (sum & 0x0000FFFF) + ((0xFFFF0000 & sum) >> 16);
	}
	hdr->checksum = ~((unsigned short)sum);//NOTE: no htons() - data already reversed
	if(hdr->checksum == 0)
		hdr->checksum = 0xFFFF;	
}
