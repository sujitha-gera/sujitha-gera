#include<stdio.h>
int togglebit(int val,int pos)
{
        val=val^(1<<pos);
        return val;
}
void main()
{
        int a=0x52,p=3;
        printf("%x\n",togglebit(a,p));
}

