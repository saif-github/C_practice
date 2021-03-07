#include<stdio.h>

typedef int (*funcptr)(int);

int square(int num) {
return num*num;
}

int main()
{
  int n = 5;
  funcptr fptr1 = square;
  printf("%d squared is %d\n",n, fptr1(n));

  return 0;
}
