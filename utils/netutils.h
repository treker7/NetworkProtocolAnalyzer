#ifndef NETUTILS7112
#define NETUTILS7112
#include "headers.h"
typedef char ip[16];
void send_buf(int, char *, size_t);
char *get_device(char *errbuf);
void get_ip(unsigned int, ip);
unsigned int calc_ip(ip);//get ip in network byte order
void get_mac(char *src, unsigned char *dest);

void build_ether(unsigned char *hdr_start, const unsigned char *dest, const unsigned char *source, const unsigned short type);

void build_arp(unsigned char *packet_start, const unsigned short opcode, const unsigned char *esource, const unsigned int ipsource, const unsigned char *edest, const unsigned int ipdest);

void build_ip(unsigned char *hdr_start, const unsigned short total_length, const unsigned short id, const unsigned short frag_offset, const unsigned char protocol, const unsigned int source, const unsigned int dest);

void build_udp(unsigned char *hdr_start, const unsigned short source_port, const unsigned short dest_port, const unsigned short length);//put zero in checksum (don't compute it)

void build_udp2(unsigned char *hdr_start, const unsigned short source_port, const unsigned short dest_port, const unsigned short length, const struct pseudo_hdr *p_hdr, const char *data);

#endif
