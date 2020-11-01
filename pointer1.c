#include<stdio.h>
main()
{
	int a=10;
	printf("%p\n",&a);
	printf("%d\n",a);
	printf("%d\n",*(&a));
}
/*here &a gives address of a,which varies every time because it randomly assign some address*/
/* a gives current value of a and *(&a) also gives value of a but with reference to particular address*/
