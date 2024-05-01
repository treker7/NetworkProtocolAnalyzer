#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>

#include <pcap/pcap.h>

#include "../utils/headers.h"
#include "../utils/utils.h"
#include "../utils/netutils.h"

//14 ether + 20 ip + 8 udp = 42
#define HDR_SIZE (ETHER_LEN + 20 + UDP_LEN)

int main(int argc, char *argv[]){
	if(argc != 4){
		printf("Usage: %s <ip> <port> <data>\n", argv[0]);
		return 1;		
	}
	char errbuf[PCAP_ERRBUF_SIZE];
	char *dev_name = "eth0";// = get_device();
	pcap_t *dev;	
	unsigned char *packet;
	char *data = argv[3];
	char *remote_ip = argv[1];
	unsigned short d_port;
	if(sscanf(argv[2], "%hu", &d_port) != 1)
		fatal("in sscanf().");	
	packet = (unsigned char *)ec_malloc(HDR_SIZE + strlen(data));

	if((dev = pcap_open_live(dev_name, BUFSIZ, 0, 0, errbuf)) == NULL)
		fatal("in pcap_open_live().");	
	
	char *edest1 = "38:72:c0:64:7b:21";
	char *esource1 = "20:68:9d:f0:ac:85";
	unsigned char edest2[6], esource2[6];
	get_mac(edest1, edest2);
	get_mac(esource1, esource2);
	
	build_ether(packet, edest2, esource2, IPv4);
	unsigned int source = calc_ip("192.168.1.5");
	unsigned int dest = calc_ip(remote_ip);
	build_ip(packet + ETHER_LEN, HDR_SIZE + strlen(data) - ETHER_LEN, 600, IP_DF | 0, UDP, source, dest);
	struct pseudo_hdr p_hdr = { source, dest, '\0', UDP, htons(UDP_LEN + strlen(data)) };
		
	build_udp2(packet + ETHER_LEN + sizeof(struct ip_hdr), 14141, d_port, UDP_LEN + strlen(data), &p_hdr, data);
	memcpy(&packet[HDR_SIZE], data, strlen(data));

	if(pcap_sendpacket(dev, packet, HDR_SIZE + strlen(data)) == -1)
		fatal("in pcap_send_packet().");

	pcap_close(dev);
	return 0;
}
