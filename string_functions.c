#include <stdio.h>
#include <string.h>
int main ()
{
	char str1[12] = "Hello";
	char str2[12] = "World";
	char str3[12];
	
	int len ;

	strcpy(str3, str1);		/* copy str1 into str3 */
	printf("strcpy( str3, str1) :%s\n", str3 );
	
	strcat( str1, str2);	/* concatenates str1 and str2 */
	printf("strcat( str1, str2):%s\n", str1 );

	
	len = strlen(str1);		/* total lenghth of str1 after concatenation */
	printf("strlen(str1) : %d\n", len );
	return 0;	
}

/*1 strcpy(s1, s2); -> Copies string s2 into string s1.
2 strcat(s1, s2); -> Concatenates string s2 onto the end of string s1.
3 strlen(s1);     ->   Returns the length of string s1.
4 strcmp(s1, s2); -> Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.
5 strchr(s1, ch); -> Returns a pointer to the first occurrence of character ch in string s1.
6 strstr(s1, s2); -> Returns a pointer to the first occurrence of string s2 in string s1.*/
