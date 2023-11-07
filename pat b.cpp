#include<stdio.h>
int main()
{
	int i,j,n;
	printf("the value of n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		printf("%c",(char)(65+i));
		printf("\n");
	}
	return 0;
}
