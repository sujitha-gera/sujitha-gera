#include<stdio.h>
int setbit(int val,int pos)
{
	val=val|(1<<pos);
	return val;
}
void main()
{
	int a=0x42,p=3;
	printf("%x\n",setbit(a,p));
}
