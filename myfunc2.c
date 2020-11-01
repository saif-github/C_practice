#include<stdio.h>
myfun()
{
	int local=20;                        //3
	printf("myfunc,local=%d\n",local);
	printf("Hollo\n");
	return 100;
}

int main()
{ 
	int local=5;
	{
		int local=10;
		printf("local=%d\n",local);        //1
	}
	printf("calling myfun:%d\n",myfun()); //2--it calls myfun() here 
	printf("local=%d\n",local);          //4
	return 0;
}
/*here program starts from main() then it executes blocks within braces*/
/*here we r directly giving return value at the end of myfun block 
it take 100 and print directly*/
