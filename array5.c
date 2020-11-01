#include<stdio.h>

pass(int m[][4])				
{
	int i,j;

	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
printf("\n");
}

pass_to_pointer(int (*m)[4])				
{
	int i,j;

	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",*(*(m+i)+j));
		}
		printf("\n");
	}
}


int main()
{
	int a[][4]={1,2,3,4,5,6,7,8};
	pass(a);
	pass_to_pointer(a);
}

