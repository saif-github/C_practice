/*9. int funct1(int a)
 { if (a) return funct1(--a)+a; else return 0; }

void main() { int a=7; printf("%d",funct1(a)); }*/

#include<stdio.h>

int funct1(int a)
{
if (a)
return funct1(--a)+a;
else
return 0; 
}

void main() 
{
int a=7; 
printf("%d\n",funct1(a)); 
}


