#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../utils/utils.h"

static unsigned char permutation[256];
static char init = 0;
static int i = 0, j = 0;

static void swap(int i, int j){//swap elements of permutation
	int temp = permutation[j];
	permutation[j] = permutation[i];
	permutation[i] = temp;
}
//write num_bytes of the keystream into the array pointed to by str. Note that memory management is deligated to the user
static void keystream_bytes(unsigned char *str, unsigned int num_bytes){
	if(!init){
		fatal("in keystream_bytes(). RC4 permutation not initialized.");
	}
	int t;
	for(int n = 0; n < num_bytes; n++){
		i = (i + 1) % 256;
		j = (j + permutation[i]) % 256;
		swap(i, j);		
		t = (permutation[i] + permutation[j]) % 256;
		str[n] = permutation[t];		
	}	
}
void s_encrypt(unsigned char *plain, unsigned char *ciph, int len){//generate keystream bytes, XOR with string pointed to by plain, and write to string pointed to by ciph
	if(!init){
		fatal("in s_encrypt() RC4 permutation not initialized.");
	}
	unsigned char *keystream = (unsigned char *)ec_malloc(len);
		
	keystream_bytes(keystream, len);
	for(int n = 0; n < len; n++){
		ciph[n] = plain[n] ^ keystream[n];
	}//no null byte added
		
	free(keystream);	
}
void init_perm(unsigned char *key){//initialize the permutation using the key
	int len = strnlen(key, 257);
	if(len > 256){
		fatal("in init_perm() RC4 key too long.\n");		
	}
	unsigned char k[256];	
	for(i = 0; i < 256; i++){
		permutation[i] = i;
		k[i] = key[i % len];
	}
	j = 0;	
	for(i = 0; i < 256; i++){
		j = (j + permutation[i] + k[i]) % 256;
		swap(i, j);		
	}
	i = j = 0;

	init = 1;
	keystream_bytes(k, 256);//discard first 256 bytes of keystream		
}
