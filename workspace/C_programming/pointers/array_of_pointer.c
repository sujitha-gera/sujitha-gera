#include<stdio.h>
void main()
{
	int a[]={1,2,3,4,5};         //1  2   3   4   5
	int *p[]={a,a+1,a+2,a+3,a+4};//a  a+1 a+2 a+3 a+4
	int **q=p;                   //p  p+1 p+2 p+3 p+4
	q++;//p+1                    //q  q++
	printf("%d %d %d\n",q-p,*q-a,**q); // q-p=p+1-p=1, *q-a=a+1-a=1, **q=2
}

