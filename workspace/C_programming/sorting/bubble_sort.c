#include<stdio.h>
void main()
{
	int a[]={4,2,6,1};
	int i,j,temp;
	int n=sizeof(a)/sizeof(a[0]);
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if(a[j]<a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("array after bubble sort:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
