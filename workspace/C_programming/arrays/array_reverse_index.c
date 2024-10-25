#include<stdio.h>
int largestindex(int a[],int n)
{
    int l=0,i,j;
    for(i=0;i<n;i++){
            if(a[i]>a[l])
            {
               l=i;
            }
    }
    return l;
}
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
    int res=largestindex(a,n);
    printf("largest value index=%d\n",res);
    int index;
    printf("enter index number to reverse array:");
    scanf("%d",&index);
   indexfun(a,n,index);
}
