#include<stdio.h>
#include<stdlib.h>
#define check(x,pos) (x>>pos)&1?printf("bit status:high\n"):printf("bit status:low\n")
void main()
{
	int x,pos;
	printf("enter number and position:");
	scanf("%x %d",&x,&pos);
	check(x,pos);
}
