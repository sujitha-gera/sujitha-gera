#include<stdio.h>
void main()
{
    int num,binnum,base=1,dec=0,x=0;
    printf("enter binary number:");
    scanf("%d",&num);
    binnum=num;
    while(num>0)
    {
        x=num%10;
        dec=dec+x*base;
        num=num/10;
        base=base*2;
    }
     printf("The Binary number is = %d \n",binnum);
    printf("Its decimal equivalent is = %d \n",dec);
}
