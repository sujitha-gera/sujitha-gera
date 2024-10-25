#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="hello";
	int i=0,j=0;
	char temp;
	while(a[j]!='\0')
	{
		j++;
	}
	j=j-1;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	printf("the reversed string is :%s\n",a);
}
