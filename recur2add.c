#include<stdio.h>
main()
{
	int result;
	result=recur(1);	//(1)
	printf("\n result=%d\n",result);
}
recur(int a)
{
	int x=0,y=0;
	printf("%d ",a);		//(2)
	y=a;
	if(a>=5)		//(3)
	return a;
	else
	x=y+recur(++a);
	return x;
}
