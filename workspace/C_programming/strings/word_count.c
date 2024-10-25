#include<stdio.h>
void main()
{
	char a[]="?this,,is-sujitha?G";
	int count=1,i=0;
	while(a[i]!='\0')
	{
		if (a[i]<65 || (a[i]>90 && a[i]<97) || a[i]>122)
			count++;
		i++;
	}
	printf("word count=%d\n",count);
}

