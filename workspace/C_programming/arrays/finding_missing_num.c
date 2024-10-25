#include<stdio.h>
void main()
{
	int a[]={5,4,3,0,1};
	int n=sizeof(a)/sizeof(a[0]);
	int sum=n*(n+1)/2;
	for(int i=0;i<n;i++)
	{
		sum=sum-a[i];
	}
	printf("missing number=%d\n",sum);
}
