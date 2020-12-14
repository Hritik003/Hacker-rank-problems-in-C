#include<stdio.h>
int main()
{
	int i ,j,n;
	scanf("%d",&n);
	//printing the upper half
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%1d",j);
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%1d",j);
		}
		printf("\n");
	}
	//printing the lower loop
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%1d",j);
		}
		for(j=i-1;j>=1;j--)
		{
		  printf("%1d",j);	
		}
		
		printf("\n");
	}
	return 0;
}
