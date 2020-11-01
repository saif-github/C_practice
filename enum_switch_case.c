#include<stdio.h>

enum subject{hindi,english,maths,physics,chemistry,biology,history};

main()
{
	enum subject s;
	int i;
	for(i=0;i<=6;i++)
{
	s=i;
	int passmarks;
	switch(s)
	{
		case hindi:
			printf("hindi:");
		case english:
			printf("english:");
			passmarks=25;
		break;

		case maths:
			printf("maths:");
			passmarks=40;
		break;

		case physics:
			printf("physics:");
		case chemistry:
			printf("chemistry:");
			passmarks=35;
		break;

		default:
			printf("biology &  history:");
			passmarks=33;
	}
	printf("%d\n",passmarks);
}
}
