#include<stdio.h>
int main()
{
	int i,j,n;
	printf("the value of n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		printf("%c",(char)(65+j));
		printf("\n");
	}
	return 0;
}
