#include<stdio.h>
char main()
{
	char a;
	scanf("%c",&a);

	if (a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u') 
	//if any one operation if true it prints vowel
	printf("vowel");
	else if((a>='A'&& a<='Z')||(a>='a'&& a<='z')) //it decides the range 
	printf("consonant");
	else
	printf("not valid entry");
}
/*here || is used to move condition till it hit the true one*/
/*here == is used to compare values*/


