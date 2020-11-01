#include <stdio.h>

main()
{
int a=1;
//int b=1;
int b=2;

int opening_time = (a==b) ? 12 : 9;

printf("opening time is %d\n",opening_time);
}

/*if condition a=b then 12 else 9 */

/* Keep in mind that the (contition) ? : is an expression and if(condition)-then-else is a statement.*/
