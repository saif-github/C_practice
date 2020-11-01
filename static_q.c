#include<stdio.h>

int main()
{
	static int x=20;
	{
		static int x=40;
		printf("%d ",x);
	}
	printf("%d \n",x);
}
