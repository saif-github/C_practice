#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-1;j++)
			printf("  ");
		for(j=1;j<=i;j++)
			printf("*");
		for(j=1;j<i;j++)
			printf("*");
		printf("\n");
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=i;j++)
			printf(" ");
		for(j=1;j<=n-1;j++)
			printf("*");
		for(j=1;j<n-1;j++)
			printf("*");
		printf("\n");
	}
}
