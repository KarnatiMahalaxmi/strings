#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
		if(a[i]==a[i+j+1])
		printf("%d",a[i]);
	}
	}
	return 0;
}
