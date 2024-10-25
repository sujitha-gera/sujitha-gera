#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[]={4,5,0,0,0,5,0,7};
	int n=sizeof(a)/sizeof(a[0]),i=0,count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
			printf("%d ",a[i]);
		else 
			count++;
	}
	for(i=0;i<count;i++)
	{
		printf("0 ");
	}
}	
