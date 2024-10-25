#include<stdio.h>
void main()
{
    int x=0x1234;
    x=(x>>12&0xf)|((x&0x0f)<<12)|(x>>4&0xf0)|((x&0xf0)<<4);
    printf("after reverse: %x\n",x);
}
