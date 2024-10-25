#include<stdio.h>
void main()
{
	int a[]={1,2,30,4,5},l=0;
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		if(a[i]>l)
		{
			l=a[i];
		}
	}
	printf("largest element=%d\n",l);
}
