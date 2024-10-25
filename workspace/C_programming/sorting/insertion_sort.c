#include<stdio.h>
void main()
{
	int a[]={5,2,7,1};
	int i,j,temp;
	int n=sizeof(a)/sizeof(a[0]);
	for(i=1;i<n;i++){
		for(j=i;j>0;j--){
			if(a[j]<a[j-1])
			{
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("array after insertion sort:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
