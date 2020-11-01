#include<stdio.h>
main()
{
	union test
	{
	unsigned int i;
	unsigned char c[2];
	};

	union test a={300};

	if((a.c[0]==1)&&(a.c[1]==44))
	{
		printf("big endian\n");
	}
	else
	{
		printf("little endian\n");
	}
}
