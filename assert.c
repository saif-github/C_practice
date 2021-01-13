/*
 * assert.c
 *
 *  Created on: 30-Dec-2018
 *      Author: saif
 */


#include<stdio.h>

//#define NDEBUG
#include<assert.h>

void open_record(char *record_name)
{
    assert(record_name != NULL);
    /* Rest of code */
    printf("assert evaluates to true\n");
}

int main(void)
{
   //open_record("string");
   open_record(NULL);
}





