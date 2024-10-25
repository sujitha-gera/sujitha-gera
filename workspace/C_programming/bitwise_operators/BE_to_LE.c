#include<stdio.h>
void main()
{
    int x=0x12345678;
    x=(x>>24&0xff)|((x&0x0ff)<<24)|(x>>8&0xff00)|((x&0xff00)<<8);
    printf("%x\n",x);
}
