#include<stdio.h>
int largestindex(int a[],int n)
{
    int l=0,i,j;
    for(i=0;i<n-1;i++){
            if(a[i]>l)
            {
               l=i;
            }
    }
    return l;
}
void main()
{
    int a[]={4,2,1,8,5},temp;
    int n=sizeof(a)/sizeof(a[0]);
    int res=largestindex(a,n);
    printf("largest value index=%d\n",res);
}
