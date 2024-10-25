#include<stdio.h>
void main()
{
	int a=0x12345678;
	char *p;
	if(*p==0x78)
		printf("the mechine is little endian \n");
	else
		printf("the mechine is big endian \n");
}
