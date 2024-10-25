#include<stdio.h>
int fun(int n)
{
    if(n==0)
        return 0;
    return n%10+fun(n/10);
}
void main()
{
    int n=123;
    int res=fun(n);
    printf("sum of digits:%d\n",res);
}
