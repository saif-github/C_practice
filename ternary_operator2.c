/*3. Write the ternary operator for the following 

if ( a > 10) b=20; else b=30;     */

#include <stdio.h>

main()
{

int a,b;

printf("enter the vlaue of a=");
scanf("%d",&a);

b= (a>10) ? 20 : 30 ;
printf("then the value of b=%d\n",b);
}

