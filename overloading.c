#include<stdio.h>

int sum(void * arg1, int arg2);

void main(void)
{
	printf("%x\n",sum((void *)0xFFFF,0));

	printf("%x\n",sum((void *)0xFFFF,1));

}


int sum(void * arg1, int arg2)
{ 

	if(arg2 == 0)
	{
	   	return *(int *)arg1;
	}
	else if(arg2 == 1)
	{
	  	return *(char *)arg1;
	}
	else{
		return 0;
	}

}


