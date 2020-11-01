#include<stdio.h>
#include "extern_func.c"

void func1(void);
void func2(void);
void func3(void);
void func4(void);


int x=6;

/*if an external variable is defined as static,then it can't be used in other programs*/
static int x=10;


main()
{

/*if the variable x is needed only in this function then we use extern in this function*/
	//extern int x;
	printf("%d\n",x);
	printf("main function executed\n");
	func1();
	func2();
	func3();
	func4();
}

void func1(void)
{
	printf("%d\n",x);
	printf("function 1 executed\n");
}

//int x=2;	//this variable is available only to the functions after these defination

void func2(void)
{
	printf("%d\n",x);
	printf("function 2 executed\n");
}
