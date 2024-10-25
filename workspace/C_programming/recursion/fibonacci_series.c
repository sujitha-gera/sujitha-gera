//fibonacci series
#include<stdio.h>
#include<stdlib.h>

int fib(int n)
{
	if(n<=1)
		return n;
	else
		return fib(n-1)+fib(n-2);
}

int main()
{
	int n;
	printf("enter number of terms:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int res=fib(i);
		printf("%d ",res);
	}
	return 0;
}
