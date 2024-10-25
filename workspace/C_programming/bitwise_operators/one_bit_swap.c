#include<stdio.h>
int swap(int a,int p1,int p2)
{
	int b1=a>>p1&1;
	int b2=a>>p2&1;
	if(b1==1)
		a=a|(a<<p2);
	else
		a=a&~(1<<p2);
	if(b2==1)
		a=a|(1<<p1);
	else
		a=a&~(1<<p1);
	return a;
}
void main()
{
	int a=0x72;
	int p1=3,p2=6;
	printf("%x\n",swap(a,p1,p2));
}
