#include<stdio.h>
void main()
{
	int x=0x2a;
	x=(x>>4&0x0f)|((x&0xf)<<4);
	printf("after nibble swap value=%x\n",x);
}
