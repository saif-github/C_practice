#include<stdio.h>
inc()
{
  int global=30;
  int sglobal=20;
  int a=10;
  int b=10;
  printf(" a address=%p\n b address=%p\n global=%p\n sglobal=%p\n",&a,&b,&global,&sglobal); 
  // to know the address of a,b,global,static global
  //%p----is to get the address in hex
	return 0;
}
main()
{
	inc();				//here we r calling inc()
	return 0;
}

