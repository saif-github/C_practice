/*
 * polish_calculator.c
 *
 *  Created on: 27-Dec-2018
 *      Author: saif
 */


#include<stdio.h>

#define MAXLEN  100

int sp = 0;
double val[MAXLEN];

void push(double f)
{

	if(sp<MAXLEN)
		val[sp++] = f;
	else
		printf("error: stack full,can't push %g\n ",f);
}

double pop(void)
{
	if(sp>0){
		return val[--sp];
	}
	else
	{
		printf("error:stack is empty");
		return 0.0;
	}
}
