#include <stdio.h>
int main ()
{
	int i;
	for( i=0; ;i++ )
	{
		printf("This loop will run forever %d.\n",i);
	}
	return 0 ;
}

/*When the conditional expression is absent, it is assumed to be true. You may have an
initialization and increment expression*/
