#include<stdio.h>
#include<stdbool.h>

int main()
{
 int a =5;
 int b = 6;

	//int c = (bool)(a/b);  //Gets the 0 when b is max and gets 1 when a is max
	int c = (bool)a/b;	//when b = 0 throws error

	printf("%d \n",c);

 return 0;
}


//expiremental conclusion dividend can be zero but divider cannot be zero

//Floating point exception (core dumped) 0n --> 5/0

