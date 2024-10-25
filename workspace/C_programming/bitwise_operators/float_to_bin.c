#include<stdio.h>
void floattobin(int *p)
{
	for(int i=31;i>=0;i--)
	{
		printf("%d",*p>>i&1);
	}
	printf("\n");
}
void main()
{
	float a=2.4;
	floattobin(&a);
}
