#include <stdio.h>
#define getName(var)  #var

int main()
{
    int myVar;
    printf("%s\n", getName(myVar));
    return 0;
}
