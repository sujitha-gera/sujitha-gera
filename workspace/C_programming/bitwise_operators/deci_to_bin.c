#include<stdio.h>
void main()
{
	int a=0x57;
	int x;
	for(int i=7;i>=0;i--)
	{
		x=a>>i&1;
		printf("%d",x);
	}
	printf("\n");
}
