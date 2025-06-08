/***************************************************
3. (int *) fun();
    main() { int *p; p=fun(); printf(“\n %u”,p);}
    int *fun() { int ivar=20; return &ivar; }
***************************************************/
#include<stdio.h>

(int*) fun();
//int *fun();

main()
{
	 int *p;
	 p=fun();
	 printf("%u \n",p);
}
    
int *fun()
{ 
	int ivar=20; 
	return &ivar; 
}
