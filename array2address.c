#include<stdio.h>

main()
{
	int a;
	int m[5];
	int i,j;
	for(i=0;i<5;i++)
	{
		scanf("%d",&m[i]);	//we can scan only 5 more than that get cutoff
	}
	for(j=0;j<5;j++)		
	{
	printf("m[%d]=%d , %p\n",j,*(m+j),&m[j]);	//to fetch the address of the array stored
	}
}

