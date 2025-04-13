/*
LCM (Least Common Multiple) and HCF (Highest Common Factor) have practical applications in various real-life scenarios. Here are a couple of examples:
1. LCM Application: Scheduling Events
Imagine two buses, one arriving every 12 minutes and the other every 18 minutes. To find when both buses will arrive at the station simultaneously, you calculate the LCM of 12 and 18. The LCM is 36, so both buses will arrive together every 36 minutes.
2. HCF Application: Dividing Resources
Suppose you have two ropes, one 45 meters long and the other 75 meters long, and you want to cut them into equal pieces of the maximum possible length. To find the length of each piece, you calculate the HCF of 45 and 75. The HCF is 15, so each piece will be 15 meters long.
These concepts are incredibly useful in fields like logistics, resource management, and even cryptography. Let me know if you'd like more examples or a deeper explanation!
To find the LCM (Least Common Multiple) and HCF (Highest Common Factor) of two numbers, follow these steps:
Example: Find LCM and HCF of 12 and 18Step 1: Prime Factorization
Prime factors of 12:  2x2x3 
Prime factors of 18:  2x3x3
Step 2: HCF (Common Factors)
Take the product of the smallest powers of the common prime factors.
Common factor:  and 
HCF = 2^1 X 3^1 = 6
Step 3: LCM (All Factors)
Take the product of the highest powers of all prime factors.
Factors: 
LCM = 2^2 x 3^2 = 36

*/

#include<stdio.h>

int main(void)
{
    int x,y,a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);
    a=x;b=y;
    while(a!=b)
    {
        if(a<b)
         a=a+x;
        else
         b=b+y;
    }
    printf("LCM of %d and %d is %d\n",x,y,a);
    a=x;b=y;
    while(a!=b)
    {
        if(a>b)
         a=a-b;
        else
         b=b-a;
    }
    printf("HCF of %d and %d is %d\n",x,y,a);
}