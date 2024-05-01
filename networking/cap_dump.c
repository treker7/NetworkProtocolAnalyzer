#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <signal.h>

#include <pcap/pcap.h>

#include "../utils/utils.h"
#include "../utils/netutils.h"
#include "../utils/headers.h"

#define MAX_LEN 5000

void catch_packet(unsigned char*, const struct pcap_pkthdr *, const unsigned char *);
void handle_signal(int);

pcap_t *dev;
FILE *dump_file;

int main(int argc, char *argv[])
{
	if(argc == 1){
		dump_file = stdout;
	}else if(argc == 2){//user supplied a dump file
		if((dump_file = fopen(argv[1], "a")) == NULL)
			fatal("in fopen().");
	}else{
		printf("Usage: %s [dump_file]\n", argv[0]);
		return 1;
	}

	char errbuf[PCAP_ERRBUF_SIZE];
	char *dev_name;	
	int link_type;	
	
	dev_name = get_device(errbuf);	
	
	if((dev = pcap_open_live(dev_name, MAX_LEN, 1, 5, errbuf)) == NULL)//promiscuous mode enabled and timeout of 5 milliseconds
		fatal("in pcap_open_live().");	
	if((link_type = pcap_datalink(dev)) == PCAP_ERROR_NOT_ACTIVATED)
		fatal("in pcap_datalink(). Device not activated correctly.");
	if(link_type != DLT_EN10MB)
		fatal("link type not supported.");	
	if(pcap_setdirection(dev, PCAP_D_INOUT) == -1){//PCAP_D_IN = capure only packets received by device, PCAP_D_OUT = only sent packets
		printf("There was a problem setting the direction.\n");
	} 
	printf("Using device: %s\nLink Type: %d\n", dev_name, link_type);
	if(dump_file != stdout)
		fprintf(dump_file, "<------------------------------------>\n");		

	signal(SIGINT, handle_signal);//register signal handler
	pcap_loop(dev, -1, catch_packet, dev_name);	
}
void catch_packet(unsigned char* user_args, const struct pcap_pkthdr *cap_header, const unsigned char *packet){
	const struct ether_hdr *ethernet = (const struct ether_hdr *)packet; 	
	unsigned short type = ntohs(ethernet->type);	
	ip source_ip;
	ip dest_ip;	

	//printf("Device name: %s\n", user_args);
	//fprintf(dump_file, "\nCaptured a %d byte packet.\n", cap_header->len);	
	if(type == ARP){
		const struct arp_packet *arp = (const struct arp_packet *)(packet + ETHER_LEN);
		unsigned short opcode = ntohs(arp->opcode);
		get_ip(ntohl(arp->ipsource), source_ip);
		get_ip(ntohl(arp->ipdest), dest_ip);		
		
		fprintf(dump_file, "ARP Packet From: %s To: %s\n", source_ip, dest_ip);		
		if(opcode == ARP_REQUEST)
			fprintf(dump_file, "REQUEST\n");
		else if(opcode == ARP_REPLY)
			fprintf(dump_file, "REPLY\n");
		else
			fprintf(dump_file, "OPCODE: %d\n", opcode);
	}else if(type == IPv4){
		const struct ip_hdr *ip = (const struct ip_hdr *)(packet + ETHER_LEN);		
		unsigned char ip_header_len = ip->ihl * 4;//in bytes		
		unsigned short total_length = ntohs(ip->total_length);		

		unsigned char proto = ip->protocol;		
		get_ip(ntohl(ip->source), source_ip);
		get_ip(ntohl(ip->dest), dest_ip);
		
		fprintf(dump_file, "IP Packet From: %s To: %s\n", source_ip, dest_ip);
		if(proto == TCP){
			const struct tcp_hdr *tcp = (const struct tcp_hdr *)(packet + ETHER_LEN + ip_header_len);
			unsigned char tcp_header_len = tcp->offset * 4;
			fprintf(dump_file, "TCP Protocol. Source port: %u\tDest port: %u\n", ntohs(tcp->source_port), ntohs(tcp->dest_port));
			
			const unsigned char *data = (packet + ETHER_LEN + ip_header_len + tcp_header_len);
			int data_len = 	(total_length - ip_header_len - tcp_header_len);		
			fprintf(dump_file, "%u bytes of data:\n", data_len);
			dump(dump_file, data, data_len); 
		}else if(proto == UDP){//udp (header length always = 8 octets)
			const struct udp_hdr *udp = (const struct udp_hdr *)(packet + ETHER_LEN + ip_header_len);
			fprintf(dump_file, "UDP Protocol. Source port: %u\tDest port: %u\n", ntohs(udp->source_port), ntohs(udp->dest_port));
			
			const unsigned char *data = (packet + ETHER_LEN + ip_header_len + UDP_LEN);
			int data_len = (total_length - ip_header_len - UDP_LEN);
			fprintf(dump_file, "%u bytes of data:\n", data_len);			
			dump(dump_file, data, data_len);						
		}else{
			fprintf(dump_file, "Unknown protocol: %u\n", proto);
		}		
	}else if(type == IPv6){
		fprintf(dump_file, "IPv6 packet. Not implemented yet.\n");//to be implemented later	
	}else{
		fprintf(dump_file, "Unkown packet type: %u\n", type);
	}
	fprintf(dump_file, "\n");
}
void handle_signal(int sig){
	printf("\nProgram recieved interrupt signal (%d). Now terminating.\n", sig);
	fflush(dump_file);	
	fclose(dump_file);	
	pcap_close(dev);
	exit(0);
}
