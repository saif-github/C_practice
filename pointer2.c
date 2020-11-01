#include<stdio.h>
main()
{
	int a=10;
	int *p;
	p=&a;
	printf("%d\n",a);
	printf("%d\n",*(&a));
	printf("%d\n",*p);
	printf("%d\n",**(&p));
}

/*here p-pointer>>>to define pointer *p
		>>>to assign address p=&a   */
/* pointer stores address not value  */
