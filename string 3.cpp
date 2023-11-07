#include<stdio.h>
int main()
{
	int i,j;
	char str[]="hello",st[]="sir",s[20];
	for(i=0;str[i]!='\0';i++)
	{
	s[i]=str[i];
}
	for(j=0;st[j]!='\0';i++,j++){
	s[i]=st[j];
}
	s[i]='\0';
	printf("%s",s);
}
