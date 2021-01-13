/*
 * nested_func.c
 *
 *  Created on: 30-Dec-2018
 *      Author: saif
 */


// C program of nested function
// with the help of gcc extension
#include <stdio.h>
int main(void)
{
    auto int view(); // declare function with auto keyword
    view(); // calling function
    printf("Main\n");

    int view()
    {
        printf("View\n");
        return 1;
    }

    printf("GEEKS\n");
    return 0;
}


