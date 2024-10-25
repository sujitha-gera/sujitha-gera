//vowel count in string using recursion in c
#include<stdio.h>
int vowelcount(char *str,int i)
{
	if(str[i]=='\0')
		return 0;
	char c=str[i];
	int isvowel=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' ||
		     c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
	return isvowel+vowelcount(str,i+1);
}
void main()
{
	char str[20];
	printf("enter string:");
	scanf("%19s",str);
	int count=vowelcount(str,0);
	printf("number of vowels:%d\n",count);
}

