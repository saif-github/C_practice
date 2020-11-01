#include<stdio.h>
main()
{
	int m[5]={};
	int *ptr=NULL;		//to initialize array assign it NULL in caps
	int i,j;

	for(i=0;i<5;i++)
	{
		scanf("%d",&m[i]);	//we can scan only 5 more than that get cutoff
	}

	ptr=&m[0];

	for(j=0;j<5;j++)
	{
		printf("%d\n",*ptr);	
		ptr++;
	}			//here pointer moves by 1 unit ie, 4 bytes
	printf("\n");
	return 0;
}

