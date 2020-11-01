 #include<stdio.h>
 #define Compute(a,b,c) (a+b-c)

		void main() 
		{ 
			int x=5,y=7,z=9;
			printf("%d\n",Compute(y,z,(-x+y)) * Compute(z,x,(- y+z))); 
		}
		/*here we r defining compute but here (x,y,z) is replaced by (x+y-z)
		   as like in printf it takes ---     (y,z,(-x+y))-----y+z-(-x+y)
		   																										y+z+x-y
x+z
5+9=14
(z,x,(-y+z))----z+x+y-z
x+y
5+7=12
14*12=168
print it  */							 
