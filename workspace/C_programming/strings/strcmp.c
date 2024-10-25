#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="hello";
	char b[]="hello";
	int i=0;
	while(a[i]!='\0' && b[i]!='\0')
	{
		if(a[i]!=b[i])
			break;
		i++;
	}
	if(a[i]=='\0' && b[i]=='\0')
		printf("both strings are same\n");
	else
		printf("both strings are not same\n");
}
