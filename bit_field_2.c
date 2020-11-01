/***********************************************************************
The above representation of ‘date’ takes 12 bytes on a compiler 
where an unsigned int takes 4 bytes. 
Since we know that the value of d is always from 1 to 31, 
value of m is from 1 to 12, we can optimize the space using bit fields.

************************************************************************/



#include <stdio.h>
 
// A space optimized representation of date
struct date
{
   // d has value between 1 and 31, so 5 bits
   // are sufficient
   unsigned int d: 5;
 
   // m has value between 1 and 12, so 4 bits
   // are sufficient
   unsigned int m: 4;
 
   unsigned int y;
};
 
int main()
{
   printf("Size of date is %ld bytes\n", sizeof(struct date));
   struct date dt = {21,10, 2015};
   printf("Date is %d/%d/%d\n", dt.d, dt.m, dt.y);
	
   return 0;
}

