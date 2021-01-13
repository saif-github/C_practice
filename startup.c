/*
 * startup.c
 *
 *  Created on: 29-Dec-2018
 *      Author: saif
 */



#include<stdio.h>

/* Apply the constructor attribute to myStartupFun() so that it
    is executed before main() */
void myStartupFun (void) __attribute__ ((constructor));


/* Apply the destructor attribute to myCleanupFun() so that it
   is executed after main() */
void myCleanupFun (void) __attribute__ ((destructor));


/* implementation of myStartupFun */
void myStartupFun (void)
{
    printf ("startup code before main() function\n");
}

/* implementation of myCleanupFun */
void myCleanupFun (void)
{
    printf ("cleanup code after main() function\n");
}

int main (void)
{
    printf ("hello\n");
    return 0;
}

