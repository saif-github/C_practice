#include<stdio.h>
main()
{
	int a=10;
	int *p1;
        int **p2;       
	p1=&a;
	p2=&p1;
	printf("%d\n",a); 	//value of a
	printf("%d\n",*(&a));	//value of a stored in particular address
	printf("%d\n",*p1);	//we get value of a whose address is stored in p1 
	printf("%d\n",**p2);	//p2 have address of p1 which have address of a on which a value is stored
	printf("%d\n",***(&p2));//&p2=address(p2)--p2=address(p1)--p1=address(a)--&a=value of a 
}

/*to define anoter pointer we use *p2 which stores address of another variable, but 
here we r storing address of one pointer to another pointer then we define it as **p2,
and it goes on like ***p3 to store address of p2.....*/

