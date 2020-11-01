#include <stdio.h>


struct bit_test
{
unsigned int  bits:6;
}bit;


void main(void)
{

bit.bits=62;

printf("%d\n",bit.bits);
}

