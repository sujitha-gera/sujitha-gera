#include<stdio.h>
void indexfun(int a[],int n,int index)
{
    int i=0,j=index,temp;
    while(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void main()
{
    int a[]={4,20,10,8,5},temp;
    int n=sizeof(a)/sizeof(a[0]);
    int index;
    printf("array before reversing:");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("enter number up to what index you want to reverse array:");
    scanf("%d",&index);
   indexfun(a,n,index);
}
