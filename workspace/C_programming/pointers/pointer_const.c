#include<stdio.h>
void main()
{
	int a=2,b=3;
	int * const p=&a; //p is a constant pointer integer
//	p=&b; //gives error
	printf("before changing *p value=%d\n",*p);
	*p=4;
	printf("after changing *p value=%d\n",*p);
}

