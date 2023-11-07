#include<stdio.h>
int main()
{
	int i;
	char str[]="hello";
	char s[50];
	for(i=0;str[i]!='\0';i++)
	s[i]=str[i];
	printf("%s",s);
}
