#include<stdio.h>
void main()
{
	int a=20;
	int *p;
	p=&a;
	int **q=&p;
	printf("%d %d %d\n",a,*p,**q);
}
