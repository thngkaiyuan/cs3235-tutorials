#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 8 

void bof(char * string)
{
	int i, j; 
	char buf[BUFSIZE];
	i = j = 1;

	strcpy(buf, string); 
	printf("i = 0x%x, j = 0x%x\n", i, j);
}

int main(int argc, char ** argv)
{
	if(argc != 2)
	{
		printf("Usage: ./bof any-string-you-want\n");
		return -1;
	}
	bof(argv[1]);
	printf("return successfully!\n");
	return 0; 
}
