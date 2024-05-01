#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <signal.h>
#include <errno.h>

#include "../utils/utils.h"

#define PORT 16267

void signal_hand(int);
int server_sock, client_sock;

int main(){
	struct sockaddr_in server, client;
	int yes = 1, recv_len;
	unsigned char buf[1000];
	char *data = "Hello From Treker Labs\n";
	unsigned int size = sizeof(struct sockaddr_in);

	if((server_sock = socket(PF_INET, SOCK_STREAM, 0)) == -1)
		fatal("in socket().");
	if(setsockopt(server_sock, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(int)) == -1)
		fatal("in setsockopt().");
	
	server.sin_family = AF_INET;
	server.sin_port = htons(PORT);
	server.sin_addr.s_addr = 0;//automatically fill with my ip
	memset(&(server.sin_zero), '\0', 8);

	if(bind(server_sock, (struct sockaddr *)&server, sizeof(struct sockaddr)) == -1)
		fatal("in bind().");
	if(listen(server_sock, 4) == -1)
	{	
		if(errno == EADDRINUSE)
			printf("Port already in use.\n");
		else
			printf("ERROR: %s\n", strerror(errno));
		return 1;
	}
	
	printf("Listening for connections on port %d\n\n", PORT);
	signal(SIGINT, signal_hand);
	while(1){//listen for connections, 
		if((client_sock = accept(server_sock, (struct sockaddr *)&client, &size)) == -1)
			continue;//error on this
		
		printf("Connection from %s port %d\n", inet_ntoa(client.sin_addr), ntohs(client.sin_port));
		if((recv_len = recv(client_sock, buf, 100, 0)) == -1){//receive up to 100 bytes of data
			close(client_sock);
			continue;
		}
		buf[recv_len] = '\x00';
		printf("Client Says:\n");
		dump(stdout, buf, strlen(buf));
		send(client_sock, data, strlen(data), 0);			
		close(client_sock);
	}
	return 0;
}
void signal_hand(int sig){
	printf("\nProgram recieved interrupt signal...terminating...\n");
	close(server_sock);
	exit(0);
}
