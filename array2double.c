#include<stdio.h>

main()
{
	int m[10];
	int i,j;

	for(i=0;i<10;i++)
	{
		scanf("%d",&m[i]);
	}

	int *ptr=NULL;
	ptr=&m[0];
	for(j=0;j<10;j++)
	{
		*ptr=*ptr*2;
		printf("%d ",*ptr);
		ptr++;
	}
}

