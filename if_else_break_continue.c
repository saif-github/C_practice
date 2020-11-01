/* 6. What will be output for the following, after scanning an integer a

if(a>10) break; else continue;  */

#include <stdio.h>

main()
{
int a;
scanf("%d",&a);
if(a>10)
 break;
printf("hi\n");
 else continue;
printf("hello\n");
printf("bye\n");
}

/* break terminates and continue skips */
