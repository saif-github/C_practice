#include<stdio.h>

main()
{
	int n;
	for(n=1;n<=5;n++)
	{
		if(n==3)
		{
		printf("i understand the use of continue\n");
		continue;
		}
		printf("number = %d\n",n);
	}
	printf("out of for loop\n");
}
