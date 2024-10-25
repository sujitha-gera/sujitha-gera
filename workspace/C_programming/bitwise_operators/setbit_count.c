#include<stdio.h>
void main()
{
	int a=0x57;
	int x=0,c=0;
	for(int i=7;i>=0;i--)
	{
		x=a>>i&1;
		if(x==1)
			c++;
	}
	printf("setbit count=%d\n",c);
}
