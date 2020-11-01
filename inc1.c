#include<stdio.h>
inc()
{
  int a=10;
  int b=10;
  printf("a address=%p\n,b address=%p\n",&a,&b); // to know the address of a and b
	return 0;
}
int main()
{
	inc();				//here we r calling inc()
	return 0;
}

