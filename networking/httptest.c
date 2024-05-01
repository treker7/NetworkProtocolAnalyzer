#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include "../utils/utils.h"
#include "../utils/netutils.h"

#define BUF_SIZE 5000

int main(int argc, char *argv[]){
	if(argc < 3){
		printf("Usage: %s <hostip> <directory>\n", argv[0]);
		return 1;
	}
	struct in_addr server_ip;
	int sockfd;
	unsigned char response[BUF_SIZE];

	char str[100];
	strcat(str, "GET ");
	strcat(str, argv[2]);
	strcat(str, " HTTP/1.0\r\n\r\n");

	int recv_len;

	if((sockfd = socket(PF_INET, SOCK_STREAM, 0)) == -1)
		fatal("in socket().");

	if(inet_aton(argv[1], &server_ip) == 0)
		fatal("in inet_aton().");

	struct sockaddr_in server; 	
	server.sin_family = AF_INET; 
	server.sin_port = htons(80); 
	server.sin_addr = server_ip; 
	memset(&(server.sin_zero), '\0', 8);

	if(connect(sockfd, (struct sockaddr *)&server, sizeof(struct sockaddr)) == -1)
		fatal("in connect().");

	send_buf(sockfd, str, strlen(str));

	while((recv_len = recv(sockfd, response, BUF_SIZE, 0)) > 0){
		response[recv_len] = '\0';//add NULL
		printf("%s\n", response);
	}
	close(sockfd);
	return 0;
}
