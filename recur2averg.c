#include<stdio.h>
int b;
main()
{
	scanf("%d",&b);
	int result;
	result=recur(1);	
	printf("\n result=%d\n",result/b);
}
recur(int a)
{

	int x=0,y=0;
	printf("%d ",a);		
	y=a;
	if(a>=b)		
	return a;
	else
	x=y+recur(++a);
	return x;
}

