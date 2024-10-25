#include<stdio.h>
int clearbit(int val,int pos)
{
        val=val&~(1<<pos);
        return val;
}
void main()
{
        int a=0x75,p=4;
        printf("%x\n",clearbit(a,p));
}

