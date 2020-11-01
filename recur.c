#include<stdio.h>
main()
{
	recur(1);			//(1)
	printf(" completed\n");
}
recur(int a)
{
	printf("%d\n",a);		//(2),(6)
	++a;				//(3),(7)
	if(a>=8)			//(4),(8)--if true return to main else execute (4)
	{
		printf("recursion");		//print and end after count a=a
		return;
	}
	else
	{
	        recur(a);			//(5)
	}
}
