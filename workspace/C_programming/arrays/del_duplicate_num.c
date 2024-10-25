#include<stdio.h>
void main()
{
	int a[]={1,2,3,4,5,1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(a[0]);
	int i,j;
	printf("array before removing duplicates:");
	for(i=0;i<n;i++){
                printf("%d ",a[i]);
        }
        printf("\n");
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j])
			{
				for(int k=j;k<n-1;k++){
					a[k]=a[k+1];
				}
				n--;
				j--;
			}
		}
	}
	printf("array after removing duplicates:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
