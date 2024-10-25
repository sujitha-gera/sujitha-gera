//finding x^n value
#include<stdio.h>
#include<stdlib.h>
int power(int x,int n)
{
	if(n!=0)
		return x*(power(x,n-1));
	else
		return 1;
}
void main()
{
	int x,n;
	printf("enter base number:");
	scanf("%d",&x);
	printf("enter power value:");
	scanf("%d",&n);
	int res=power(x,n);
	printf("%d^%d=%d\n",x,n,res);
}
