#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="hello";
	char b[]="world";
	char c[50];
	int i=0,j=0;
	while(a[i]!='\0')
	{
		c[i]=a[i];
		i++;
	}
	while(1)
	{
		c[i]=b[j];
		if(c[i]=='\0')
			break;
		i++;
		j++;
	}
	printf("after strcat: %s\n",c);
}
