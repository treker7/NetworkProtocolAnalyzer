#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#include "netutils.h"
#include "utils.h"

int main(){
	unsigned int ipt = 0x000101FF;	
	char ipstr[16];
	get_ip(ipt, ipstr);		
	printf("IP = %sD\n", ipstr);
	
	unsigned char data[] = {0xFF, 0xA3, 0x45, 0x22, 0x34, 0x55};
	unsigned char *str = "hello world 1234567890";
	dump(stdout, data, sizeof(data));
	dump(stdout, str, strlen(str));
	
	char *mac = "03:2A-55:39:90:03";
	unsigned char mac2[6];
	get_mac(mac, mac2);
	for(int t = 0; t < 6; t++){
		printf("%02X ", mac2[t]);
	}
	printf("\n");

	ip src = "192.168.1.4\n";
	unsigned int src_num = calc_ip(src);
	printf("IP: %u\n", ntohl(src_num));

	return 0;
}
