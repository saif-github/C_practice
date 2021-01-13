/*
 * macro_expn.c
 *
 *  Created on: 29-Dec-2018
 *      Author: saif
 */


#include <stdio.h>
#define PRINT(i, limit) while (i < limit) \
                        { \
                            printf("hello world\n"); \
                            i++; \
                        }
int main()
{
    int i = 0;
    PRINT(i, 3);
    return 0;
}

