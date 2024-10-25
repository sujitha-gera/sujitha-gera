#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="helloworld";
	char b='l';
	int i=0,j=0;
	while(a[i]!='\0')
	{
		if(a[i]==b){
			j=i;
		}
		i++;
	}
	printf("last occurance is at index :%d\n",j);
}

