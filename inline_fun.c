/*
 * inline_fun.c
 *
 *  Created on: 29-Dec-2018
 *      Author: saif
 */


#include <stdio.h>

static inline int square(int x) { return x*x; }
int main()
{
  int x = 36/square(6);
  printf("%d\n", x);
  return 0;
}
