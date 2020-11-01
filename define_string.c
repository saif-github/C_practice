#include<stdio.h>

//#define SHOW(var)  printf("var=%d\n",var);

#define SHOW(var)  printf(#var"=%d\n",var);

main()
{
int a=5;

SHOW(a);
}
