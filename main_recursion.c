/*
 * main_recursion.c
 *
 *  Created on: 29-Dec-2018
 *      Author: saif
 */


#include <stdio.h>

int main()		//try int main(void)
{
	static int i=5;
	if(--i){
		printf("%d",i);
		main(10);
	}
	printf("\n in loop\n");
}

