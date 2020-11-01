#include<stdio.h>
main()
{
	char a;
	scanf("%c",&a);
	printf("%d\n",a);
	return 0;
}
/*as size of char is less than int its get some other value*/
// ex:25----50 
// as char is 1byte it takes only 2 from 25
//then put it's ASCII value into 8bit of char
//ASCII value of 2 is 32
//in binary it is 0 0 11 0 0 10
// now take 2^5+2^4+2^1=50
//we r putting char value in int
//for 2, 250, also it's 50
/*6. Scan a character and display as an int, what it is??*/
