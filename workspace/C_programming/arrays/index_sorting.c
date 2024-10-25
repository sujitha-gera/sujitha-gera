#include<stdio.h>
void indexfun(int a[],int n,int index)
{
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<=index;j++){
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("array after sorting:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void main()
{
    int a[]={4,20,10,8,5},temp;
    int n=sizeof(a)/sizeof(a[0]);
    printf("array before sorting:");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    int index;
    printf("enter number up to what index you want to sort:");
    scanf("%d",&index);
   indexfun(a,n,index);
}
