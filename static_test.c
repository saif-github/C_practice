#include<stdio.h>

void static_test(void);

main()
{
	int a=0;
	while(1)
	{
		static_test();
		sleep(1);
		a++;
	}
}

void static_test(void)
{
static int s;
printf("you are the %d visitor to this function\n",s);
s++;
}

