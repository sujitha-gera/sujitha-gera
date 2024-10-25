#include<stdio.h>
void main()
{
	int a[]={4,2,6,1};
	int i,j,temp;
	int n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("array after selection sort:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
