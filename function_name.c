/*
 * function_name.c
 *
 *  Created on: 30-Dec-2018
 *      Author: saif
 */



#include "stdio.h"

void foo(void)
{
   printf("%s\n",__func__);
   printf("%s\n",__FILE__);
   printf("%d\n",__LINE__);
}

void bar(void)
{
	printf("%s\n",__func__);
}

int main()
{
   foo();
   bar();
   return 0;
}


