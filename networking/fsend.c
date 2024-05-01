#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <signal.h>
#include <pcap/pcap.h>

#include "../utils/headers.h"
#include "../utils/utils.h"
#include "../utils/netutils.h"
#include "rc4.h"

//14 ether + 20 ip + 8 udp = 42
#define HDR_SIZE 42

unsigned int id = 600;

char *s_file = NULL;
FILE *r_file;

//all variables stored in network byte order:
unsigned short port;
unsigned int ip_dest;
unsigned int ip_src;
unsigned char mac_src[6];
unsigned char mac_dest[6];

void catch_packet(unsigned char*, const struct pcap_pkthdr *, const unsigned char *);
void handle_signal(int);
void send_udp(char *, unsigned int);
void fsend();

pcap_t *dev;
char *s_packet = NULL;
struct pseudo_hdr p_hdr;

char filter_str[70];

int main(int argc, char *argv[]){
		if(argc < 2){
			printf("Usage: %s -k [RC4_KEY] -f [FILE] [PUBLIC_IP] [PORT]\n", argv[0]);
			printf("For additional information, use the -h switch.\n");
			return 1;
		}

		unsigned int t = 0;				
		char *mand[2];//mandatory cmd line args		
		init_perm("awra22");//default rc4 key	
		for(int i = 1; i < argc; i++){
			if(strcmp(argv[i], "-k") == 0){
				init_perm(argv[++i]);//initialize rc4 permutation and skip next cmd line argument			
			}
			else if(strcmp(argv[i], "-f") == 0){
				s_file = argv[++i];
			}
			else if(strcmp(argv[i], "-h") == 0){
				printf("Usage: %s -k [RC4_KEY] -f [FILE] [PUBLIC_IP] [PORT]\n", argv[0]);
				printf("Additionally, a config.txt file specifying the user's ip, mac address, and gateway's mac (on separate lines) should be present.\n");
				return 0;
			}
			else{
				mand[t++] = argv[i];
			}
		}
		if(mand[0] == NULL || mand[1] == NULL){
			printf("Error! Must specify arguments IP and PORT.\n");
			return 1;
		}
		ip_dest = calc_ip(mand[0]);
		if(sscanf(mand[1], "%hu", &port) != 1)
			fatal("in sscanf().");
		
		FILE *config;
		char line[100];
		if((config = fopen("config.txt", "r")) == NULL)
			fatal("in fopen(). Check config.txt file.");
	
		if(fgets(line, 100, config) == NULL)
			fatal("in fgets(). Check config.txt file.");
		ip_src = calc_ip(line);
				
		if(fgets(line, 100, config) == NULL)
			fatal("in fgets(). Check config.txt file.");
		get_mac(line, mac_src);
		
		if(fgets(line, 100, config) == NULL)
			fatal("in fgets(). Check config.txt file.");
		get_mac(line, mac_dest);		
		fclose(config);

		char errbuf[PCAP_ERRBUF_SIZE];
		char *dev_name = get_device(errbuf);
		int link_type;

		if((dev = pcap_open_live(dev_name, 5000, 0, 5, errbuf)) == NULL)
			fatal("in pcap_open_live().");
		if((link_type = pcap_datalink(dev)) == PCAP_ERROR_NOT_ACTIVATED)
			fatal("in pcap_datalink(). Device not activated correctly.");
		if(link_type != DLT_EN10MB)
			fatal("link type not supported.");
		printf("\nUsing device: %s\nLink Type: %d\n", dev_name, link_type);

		p_hdr.source = ip_src; p_hdr.dest = ip_dest;
		p_hdr.zero = '\0'; p_hdr.protocol = UDP; 		
		send_udp("\x01", 1);
		
		sprintf(filter_str, "udp and src host %s and port %d", mand[0], port);
		//printf("Using filter: %s\n", filter_str);

		struct bpf_program fp;
		if(pcap_compile(dev, &fp, filter_str, 0, PCAP_NETMASK_UNKNOWN) == -1)
			fatal("in pcap_compile().");
		if(pcap_setfilter(dev, &fp) == -1)
			fatal("in pcap_setfilter().");
		pcap_freecode(&fp);

		signal(SIGINT, handle_signal);
		pcap_loop(dev, -1, catch_packet, NULL);
}
void catch_packet(unsigned char* user_args, const struct pcap_pkthdr *cap_header, const unsigned char *r_packet){//NOTE: only UDP packets should make it here
		unsigned char type = *(r_packet + HDR_SIZE);
		if(type == 1){//udp hole punch packet (no data)
			printf("Connected to peer\n");
			if(s_file == NULL)
				send_udp("\x02", 1);						
		}
		else if(type == 2){//udp hole punch response (no data)
			printf("Connected to peer\n");
		}		
		else if(type == 3){//file name incoming
			const char *fname = (r_packet + HDR_SIZE + 1);
			printf("\tFile data incoming: %s...\n", fname);
			if((r_file = fopen(fname, "wb")) == NULL)
				fatal("in fopen().");			
		}
		else if(type == 4){//file data incoming
			const char *f_data = (r_packet + HDR_SIZE + 1);
			int d_len = cap_header->len - (HDR_SIZE + 1);		
					
			fwrite(f_data, sizeof(char), d_len, r_file);
		}
		else if(type == 5){//end file data
			printf("\tEnd of file data. File saved.\n");
			fclose(r_file);
		}
		if(s_file != NULL)
			fsend();
}
void send_udp(char *data, unsigned int size){
		s_packet = (char *)realloc(s_packet, HDR_SIZE + size);
		build_ether(s_packet, mac_dest, mac_src, IPv4);
		build_ip(s_packet + ETHER_HDR_LEN, (HDR_SIZE + size) - ETHER_HDR_LEN, id++, DF | 0, UDP, ip_src, ip_dest);
				
		p_hdr.length = htons(UDP_HDR_LEN + size);//NOTE: only pseudo_hdr field that must be continually changed
		build_udp2(s_packet + ETHER_HDR_LEN + sizeof(struct ip_hdr), port, port, UDP_HDR_LEN + size, &p_hdr, data);
		memcpy(&s_packet[HDR_SIZE], data, size);

		if(pcap_sendpacket(dev, s_packet, HDR_SIZE + size) == -1)
			fatal("in pcap_send_packet().");

		if(system("sleep .03s") == -1)//sleep to minimize the chance of file data arriving out of order
			;//do nothing on fail
}
void fsend(){
		FILE *in;
		char *data;
		long d_size;
		if((in = fopen(s_file, "rb")) == NULL)
			fatal("in fopen().");
		
		fseek(in, 0L, SEEK_END);
		d_size = ftell(in);
		rewind(in);//reposition file pointer to start of file

		data = (char *)ec_malloc(d_size + 1);
		if(fread(data + 1, sizeof(char), d_size, in) != d_size)
			fatal("in fread()."); 
		fclose(in);

		char *d = ec_malloc(strlen(s_file) + 2);
		d[0] = 3;
		memcpy(d + 1, s_file, strlen(s_file) + 1);
		send_udp(d, strlen(s_file) + 2);//send file name
		free(d);		
		
		short seg = (1500 - (HDR_SIZE + 1));
		unsigned int b;		
		for(b = 0; b < (d_size - seg); b += seg){//send file data in a stream of packets...Note that packets might arrive out of order...
			data[b] = 4;			
			send_udp(data + b, seg + 1);  
		}
		data[b] = 4;
		send_udp(data + b, d_size - b + 1);		

		free(data);
		send_udp("\x05", 1);//no more file data...		
		s_file = NULL;
}
void handle_signal(int sig_num){
		printf("\nProgram recieved interrupt signal...terminating...\n");
		pcap_close(dev);
		exit(0);
}
