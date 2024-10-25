#include<stdio.h>
int mul(int x,int y)
{
	if(x==0 || y==0)
		return 0;
	else
		return x+mul(x,y-1);
}
void main()
{
	printf("%d\n",mul(3,4));
}
