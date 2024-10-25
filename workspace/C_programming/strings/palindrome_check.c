#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="malayalam";
	int i=0,j=0;
	while(a[j]!='\0')
	{
		j++;
	}j=j-1;
	while(i<j)
	{
		if(a[i]!=a[j])
			break;
		i++;
		j--;
	}
	if(i>=j)
		printf("the string is palindome\n");
	else
		printf("the string is not palindrome\n");
}
