#include<stdio.h>
void indexfun(int a[],int n)
{
    int i=0,j=n-1,temp;
    while(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    printf("array after reverse:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void main()
{
    int a[]={4,20,10,8,5},temp;
    int n=sizeof(a)/sizeof(a[0]);
    printf("array before reverse:");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
   indexfun(a,n);
}
