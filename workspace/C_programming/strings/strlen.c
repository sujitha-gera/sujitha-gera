#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="hello world";
	int l=0;
	while(a[l]!='\0')
	{
		l++;
	}
	printf("string length =%d\n",l);
}
