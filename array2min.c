#include<stdio.h>
main()
{
	int a;
	int m[5];
	int i,j,min;
	for(i=0;i<5;i++)
	{
		scanf("%d",&m[i]);	//we can scan only 5 more than that get cutoff
	}
	for(j=0;j<5;j++)		
	{
		if(min>m[j])
		{
			min=m[j];
		}
	}
	printf("%d\n",min);
}
/*comparing 2 no if greater than then put in max till another no is compared*/
