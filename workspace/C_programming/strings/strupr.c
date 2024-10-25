#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="heLLo";
	char i=0;
	while(a[i]!='\0')
	{
		if(a[i]>=97 && a[i]<=122)
			a[i]=a[i]-32;
		i++;
	}
	printf("the upper string is: %s\n",a);
}
