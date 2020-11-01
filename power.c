/*
 * power.c
 *
 *  Created on: 27-Dec-2018
 *      Author: saif
 */

#include<stdio.h>

int power(int base ,int n)
{
	int i,p;

	p=1;
	for(i=1;i<=n;++i)
		p=p*base;

	return p;
}

int main(void){
	int i;

	for(i=0;i<10;++i)
		printf("%d \t %d \n",power(2,i),power(-3,i));

	return 0;
}

