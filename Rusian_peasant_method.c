/*
Russian peeasant method multiplies any two positive numbers using multiplication by 2,
 division by 2 and addition. add the second number on odd intervals of first number.
*/

#include <stdio.h>

int main(void)
{
    int a,b,x,y,s=0;
    printf("Enter two numbers to be multiplied :");
    scanf("%d%d",&x,&y);
    a=x;
    b=y;

    while(a>=1){  //loop till first number reduces to 1

        if(a%2!=0)  // if first number is odd.
        {
            s=s+b;  //Add second number to s
        }
        printf("%d * %d \n",a,b);
        a/=2;           //Divide first number by 2
        b*=2;           //Multiply secod number by 2
    }
    printf("%d * %d = %d\n",x,y,s);
}