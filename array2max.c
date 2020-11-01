/*To find the maximum no in the array */

#include<stdio.h>

main()
{
	int a;
	int m[5];
	int i,j,max=0;

	for(i=0;i<5;i++)
	{
		scanf("%d",&m[i]);	//we can scan only 5 more than that get cutoff
	}

	for(j=0;j<5;j++)		
	{
		if(m[j]>max)
		{
			max=m[j];
		}
	}
	printf("%d\n",max);
}
/*comparing 2 no if greater than then put in max till another no is compared*/
