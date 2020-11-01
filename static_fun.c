#include <stdio.h>

void foo()
{
    int a = 10;
    static int sa = 10;
//Whenever the function is called,sa will have the last value assigned to it.

    a += 5;
    sa += 5;

    printf("a = %d, sa = %d\n", a, sa);
}


int main()
{
    int i;

    for (i = 0; i < 10; ++i)
        foo();
}

/* A static variable inside a function keeps its value between invocations.
    A static global variable or a function is "seen" only in the file it's declared in	*/

