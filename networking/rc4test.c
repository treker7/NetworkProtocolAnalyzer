#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../utils/utils.h"
#include "rc4.h"


int main(int argc, char *argv[]){
	if(argc < 3){
		printf("Usage: %s <key> <plaintext>\n", argv[0]);
		return 1;
	}
	init_perm((unsigned char *)argv[1]);
	int len = strlen(argv[2]);
	unsigned char *ciphertext = (unsigned char *)ec_malloc(len + 1);
	s_encrypt((unsigned char *)argv[2], ciphertext, len);	
	ciphertext[len] = '\0';	

	printf("%s\n", ciphertext);
	for(int i = 0; i < strlen(ciphertext); i++){
		printf("0x%02X ", (unsigned char)ciphertext[i]);
	}
	printf("\n");	
	
	free(ciphertext);
	return 0;
}
