#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LINE_SIZE7112 16

void fatal(char *message){// A function to display an error message and then exit
	printf("Fatal: %s Program will exit.\n", message);
	exit(1);
}
void *ec_malloc(unsigned int size){// An error-checked malloc() wrapper function
	void *ptr;
	ptr = malloc(size);
	if(ptr == NULL)
		fatal("in ec_malloc() on memory allocation.");
	return ptr;
}
void dump(FILE *file, const unsigned char *data, size_t len){
	for(int line = 0; line < len; line += LINE_SIZE7112)
	{
		for(int c = 0; ((c < LINE_SIZE7112) && ((c + line) < len)); c++){
			fprintf(file, "%02X ", (unsigned char)data[line + c]); 
		}
		fprintf(file, "| ");
		for(int c = 0; ((c < LINE_SIZE7112) && ((c + line) < len)); c++){
			if(isprint(data[line + c]))
				fprintf(file, "%c", data[line + c]);
			else
				fprintf(file, "."); 
		}
		fprintf(file, "\n"); 
	}
}
