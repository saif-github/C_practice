//program to demonstrate the working of continue statement in C programming 

# include <stdio.h>
int main()
{
    int i,num,product;
    for(i=1,product=1;i<=4;++i)
	{
        printf("Enter num%d:",i);
        scanf("%d",&num);
        if(num==0)
            continue;  /*In this program, when num equals to zero, it skips the statement product*=num and continue the loop. */
        product*=num;
	}
    printf("product=%d\n",product);
return 0;
}
