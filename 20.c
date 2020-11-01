#include<stdio.h>
void main() 
{
		volatile int val=5;
		//int val=5;
		printf("%d %d %d %d\n",val,--val,++val,val--); 		//compiler executes these variables from right to left
		/*compiler optimise ++val value that can be avoided using volatile*/
		printf("%d\n",val);
		printf("%d\n",val--);	//val is decremented but doen't printed
		printf("%d\n",++val);	//val is incremented and printed
		printf("%d\n",--val);
		printf("%d\n",val++);
}
/*the value  r changing to get some exact value we use volatile*/
