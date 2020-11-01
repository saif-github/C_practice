#include<stdio.h>
 int compute(int a,int b)       //function 
		{
			int c; 
			c=a+b;
			return c;
		}

		void main() 
		{
			int a=7,b=9;
			printf("%d\n",compute(a,b));  //function called inside printf()
		}
		/*if function is above main then no need of declaration otherwise
		we need to declare above main it self*/

