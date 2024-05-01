#ifndef HEADERS
#define HEADERS

#define LITTLE_ENDIAN7112 11111
#define BIG_ENDIAN7112 55555
#define BYTE_ORDER7112 LITTLE_ENDIAN7112

#define ETHER_LEN 14
#define UDP_LEN 8
#define ARP_LEN 28

#pragma pack(1)
struct ether_hdr {
	unsigned char dest[6];
	unsigned char source[6];
	unsigned short type;
	#define IPv4 0x0800
	#define ARP 0x0806
	#define IPv6 0x86DD
};
//see rfc 791
struct ip_hdr {
	#if BYTE_ORDER7112 == LITTLE_ENDIAN7112
		unsigned int ihl:4;//number of 32 bit words in the header
		unsigned int version:4;//IPv4 = 4, IPv6 = 6 
	#elif BYTE_ORDER7112 == BIG_ENDIAN7112
		unsigned int version:4;
		unsigned int ihl:4;		
	#else
	#error "Byte order specification unknown"
	#endif
	unsigned char tos;//type of service
	unsigned short total_length;//length of header + data in bytes
	unsigned short id;/*An identifying value assigned by the sender to aid in assembling the fragments of a datagram. [All fragments of a datagram have the same id value.] usually incremented by 1 for each datagram sent*/
	#define IP_DF 16384
	#define IP_MF 8192
	unsigned short frag_offset;/*NOTE: R, DF, MF, in three most significant bits of this. Number of the fragment. The first fragment has offset zero.*/
	unsigned char ttl;//time to live (usually set to 32 or 64)
	unsigned char protocol;
	#define TCP 6
	#define UDP 17
	unsigned short checksum;//only covers the header (not the data)
		//per the rfc: the 16 bit one's complement of the one's complement sum of all 16 bit words in the header.
	unsigned int source;//source IP address
	unsigned int dest;//destination IP address
	//OPTIONS (not included)	
};
//see rfc 768
struct udp_hdr {
	unsigned short source_port;
	unsigned short dest_port;
	unsigned short length;//number of bytes in the header + data (minimum value = 8)
	unsigned short checksum;//optional --- covers pseudo header + udp header + data
};
//see rfc 793
struct tcp_hdr {
	unsigned short source_port;
	unsigned short dest_port;
	unsigned int seq_num;
	unsigned int ack_num;
	#if BYTE_ORDER == LITTLE_ENDIAN
		unsigned int reserved:4;//only first 4 bits (should be set to zero)
		unsigned int offset:4;//the number of 32 bit words in the header
	#elif BYTE_ORDER == BIG_ENDIAN
		unsigned int offset:4;
		unsigned int reserved:4;		
	#else
	#error "Byte order specification unknown"
	#endif
	
	#define TCP_URG 32
	#define TCP_ACK 16
	#define TCP_PSH 8
	#define TCP_RST 4
	#define TCP_SYN 2
	#define TCP_FIN 1
	unsigned char flags;
	unsigned short window;
	unsigned short checksum;
	unsigned short urgent_pointer;
	//OPTIONS (not included)
};
//see rfc 826
struct arp_packet {
	unsigned short htype;//hardware type, ethernet = 1
	unsigned short ptype;//protocol type, ip = 0x0800
	unsigned char hsize;//hardware size in bytes (ethernet = 6)
	unsigned char psize;//protocol size in bytes (ip = 4)
	unsigned short opcode;
	#define ARP_REQUEST 1
	#define ARP_REPLY 2
    
	unsigned char esource[6];//hardware address of sender
	unsigned int ipsource;//protocol address of sender
	unsigned char edest[6];//hardware address of dest (0 if unknown) 
	unsigned int ipdest;//protocol address of dest
};
struct pseudo_hdr {//used by tcp and udp to calculate checksums
	unsigned int source;
	unsigned int dest;
	unsigned char zero;
	unsigned char protocol;
	unsigned short length;
};
#pragma pack()

#endif
