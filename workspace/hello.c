#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int a[]={6,3,4,2,1};
	int n=sizeof(a)/sizeof(a[0]);
	int i=0,j=0;
	for(i=0;i<n-1;i++){
		for(j=n-1;i<j;j--){
			if(a[j]<a[j-1])
				a[j]^=a[j-1]^=a[j]^=a[j-1];
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
