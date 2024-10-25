#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="hello-world";
	char b[20];
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]!='-')
			printf("%c",a[i]);
		i++;
	}
}
