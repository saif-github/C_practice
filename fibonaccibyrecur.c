#include<stdio.h>
int fibonacci(int);
main()
{
	int x;
	for(x=1;x<20;x++)
	{
	printf("%d ",fibonacci(x));
	}
}
int fibonacci(int i)
{
	if(i==1)
	{
		return 1;
	}
	else if(i==2)
	{
		return 2;
	}
	else
		return fibonacci(i-1)+fibonacci(i-2);
}
