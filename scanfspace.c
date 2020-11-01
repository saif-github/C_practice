/*9. Scan two integers with a space in between the two “%d’s”.*/
/*10. Scan two integers with an “*” asterisk in between the two “%d’s”, and
		 enter the values “12-23”, Observe the output*/

#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf(" a=%d\n b=%d\n",a,b);
	return 0;
}
/*in this program here scanf have space b/w %d %d
does't affect the o/p*/
/*but if we r giving some character in b/w it has to be in same format
like for ex: %d-%d it has to be type in terminal window in same format
otherwise it takes some garbage value*/
/*ex:%d*%d,%dsaif%d,*/ 
