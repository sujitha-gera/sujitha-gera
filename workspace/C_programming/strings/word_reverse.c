#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="welocme to new world";
	int i=0,j=0,len=strlen(a);
	char temp[30];
	for(i=0;i<len;i++){
		for(j=0;i<len;i++,j++){
			if(a[i]==' ' || a[i]=='\n')
				break;
			temp[j]=a[i];
		}
		while(j>0)
		{
			j--;
			a[i-j-1]=temp[j];
		}
	}
	printf("%s\n",a);
}
