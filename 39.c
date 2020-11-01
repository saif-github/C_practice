/*39. Left shift an integer variable initialized to 1, eight times. Observe the 
		output after each single shift.*/
		
#include<stdio.h>
int main()
{
	int b=1,i=0,a=0;
	while(i<=8)
	{
		a=b<<i;
		printf("a=%d b=%d\n",a,b);	
		i++;
	}
}		
/*here moving bits to left
ex:1-----0000 0001
        10000 0000 shift 1 by 8 times
        2^8=256
         0001 0000 shift by 4 times
         2^4=16                       */
        
