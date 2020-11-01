#include<stdio.h>
void main()
 {
		int a=500,b=100,c=30,d=40,e=19;
		if((((a > b) ? c : d) >= e) && !((e <= d) ? ((a / 5) == b) : (c == d)))
		printf("Success\n"); 
		else 
		printf("Failure\n"); 
 } 
 /*if if condition is true then success or else failure*/
