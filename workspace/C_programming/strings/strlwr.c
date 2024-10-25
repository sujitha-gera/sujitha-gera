#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="HeLLO";
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]>=65 && a[i]<=90)
			a[i]=a[i]+32;
		i++;
	}
	printf("the lower string is: %s\n",a);
}
