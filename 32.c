/*32. Find out the value of a.
			a = b > c ? c > d ? 12 : d > e ? 13 : 14 : 15
			for
			1. b=5;c=15;d=e=8;

			2. b=15;c=10;d=e=8;

			3. b=5;c=15;d=e=20;

			4. b=c=9;d=20;e=19;   */
	#include<stdio.h>
	main()
	{
	 int a,b=5,c=15,d=8,e=8;
	 a = 	 (b>c) ? ( (c>d) ? 12 : ( d>e ? 13:14)) : 15 ;
	 printf("a=%d\n",a);
  } 
  /*here if b>c false it jumps to 15
    if we give b<c which is true it enters c>d and give 12 
    if we give c<d which is false it enters d>e and gives 14 */
	 
	
  
			
