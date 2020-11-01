#include<stdio.h>
myfun()
{
	int local=20;                        //3
	printf("myfunc,local=%d\n",local);
	printf("Hollo\n");
}

int main()
{ 
	int local=5;
	int len=0;
	{
		int local=10;
		printf("local=%d\n",local);        //1
	}
	len=myfun();                         //2--it calls myfun() here 
	printf("local=%d\n",local);          //4
	printf("len=%d\n",len);              //5
	return 0;
}
/*here program starts from main() then it executes blocks within braces*/
/*here myfun returns 6 to the len ,it's actually the character value of 
H e l l o \n
1 2 3 4 5  6---------l=6*/
/*here we r first storing return value in variable len then printing*/
