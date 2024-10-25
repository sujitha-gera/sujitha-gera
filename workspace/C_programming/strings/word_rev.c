#include<stdio.h>
#include<string.h>
void reverse_word(char a[], int start, int end);
void reverse(char a[], int i, int j);
void reverse_word(char a[],int start,int end)
{
	int i,j;
	for(i=start,j=start;j<end;j++)
	{
		if(a[j]==' ')
			continue;
		i=j;
		while(a[j]!=' ' && j<=end)
			j++;
		j--;
		reverse(a,i,j);
	}
}
void reverse(char a[],int i,int j)
{
	char temp;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
}
int main()
{
	char a[]="hello world hi";
	reverse_word(a,0,strlen(a)-1);
	printf("%s\n",a);
	return 0;
}

