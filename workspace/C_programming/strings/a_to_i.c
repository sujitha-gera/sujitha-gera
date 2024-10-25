#include<stdio.h>
void main()
{
	char a[]="1234";
	int i=0,n=0;
	while(a[i]!='\0')
	{
		n=n*10+(a[i]-48);
		i++;
	}
	printf("%d\n",n);
}
