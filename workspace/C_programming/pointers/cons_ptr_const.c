#include<stdio.h>
void main()
{
	int a=2,b=3;
	int const * const p=&a; // p is a constant pointer to an integer, here both ineger and pointer are constant, so both can't be changed
//	p=&a; //error
//	*p=4;//gives error
	printf("*p value=%d\n",*p);
}
