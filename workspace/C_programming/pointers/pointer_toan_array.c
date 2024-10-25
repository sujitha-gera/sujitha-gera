#include<stdio.h>
void main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10,11,12};
	int (*p)[4]=&a;
	p++;
	printf("%u %d\n",*(p+1),*(*p+1));
}
