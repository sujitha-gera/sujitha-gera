#include<stdio.h>
void main()
{
	int a[]={2,3,5};
	int n=sizeof(a)/sizeof(a[0]);
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("array sum=%d\n",sum);
}
