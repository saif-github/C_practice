#include <stdio.h>

int main(void)
{
    int a=50000;
    unsigned int b =50000;
    printf("a = %i, b = %u\n",a,b);
}

/*
the value 50000 is out side the range of int data type in 16bit machine.
a = -15536, b = 50000
the value 50000 in 32bit machine.
a = 50000, b = 50000
*/

