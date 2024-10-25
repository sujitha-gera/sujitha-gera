#include<stdio.h>
void main()
{
	printf("%x\n",-20>>1);
	printf("%d\n",-20>>1);
}
//32 16 8 4 2 1   32-20=12(int binary 1100)
//1  0  1 1 0 0  (we need to right shift this one time)
//32 16 8 4 2 1
//1  1  0 1 1 0   (after right shift at msb side 1 only will add because of negative number)
//now add 16+4+2=22
//then 32-22=10 (this is -10 in decimal value)
//now hexa decimal value of -20>>1 is 0110 means 6 will add after 7f's)
