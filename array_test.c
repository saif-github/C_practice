#include <stdio.h>

int main()
{
int array[5]={1,2,3,4,5};

printf(" %p\n",array+1);

printf(" %p\n",*(array+1));
}
