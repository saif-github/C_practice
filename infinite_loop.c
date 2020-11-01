#include <stdio.h>
int main ()
{
	for( ; ; )
	{
		printf("This loop will run forever.\n");
	}
	return 0 ;
}
/*When the conditional expression is absent, it is assumed to be true. You may have an
initialization and increment expression, but C programmers more commonly use the for(;;)
construct to signify an infinite loop.*/
