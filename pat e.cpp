#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("the value of n=");
	scanf("%d",&n);
	for(i=0;i<n;i++);
	{
		if(i%2==0)
		{
		
		    for(j=0;j<i+1;j++)
		    printf("*");
		    printf("\n");
		}
		if(i%2!=0)
	       {
			  for(s=0;s<2*i;s++)
			  printf("-");
		}
	}
	return 0;
}
