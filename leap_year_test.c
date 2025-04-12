/*program to find whether a year is leap or not */

#include<stdio.h>

main()
{
	int year;
	printf("enter a year:");
	scanf("%d",&year);

	if(year%100==0)
	{
		if(year%400==0)
		printf("leap year\n");
		else
		printf(" not a leap year\n");
	}
	else
	{
		if(year%4==0)
		printf("leap year\n");
		else
		printf(" not a leap year\n"); 
	}
}
