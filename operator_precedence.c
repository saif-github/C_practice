/*
a++ + ++b*c-- - --d evaluate based on the precedence rule while the values are a=4 , b=8 ,c=3,d=9
Let’s break down the given expression step by step according to the precedence and associativity rules of operators in programming, assuming this is in a C-like language:

Expression:
a++ + ++b * c-- - --d

Precedence Order:
Postfix increment (a++, c--) (Highest precedence; evaluates the expression, then increments or decrements the value)

Prefix increment/decrement (++b, --d) (Evaluates first and then returns the updated value)

Multiplication (*)

Addition/Subtraction (+, -)

Given Values:
a = 4, b = 8, c = 3, d = 9

Step-by-Step Evaluation:
Evaluate a++:

a++ uses the value of a (which is 4) and then increments it.

So, the value contributed to the expression is 4, and after this, a = 5.

Evaluate ++b:

++b increments the value of b (from 8 to 9) and then uses it.

So, the value contributed to the expression is 9.

Evaluate c--:

c-- uses the value of c (which is 3) and then decrements it.

So, the value contributed to the expression is 3, and after this, c = 2.

Evaluate --d:

--d decrements the value of d (from 9 to 8) and then uses it.

So, the value contributed to the expression is 8.

Now substitute the updated values into the expression: 4 + 9 * 3 - 8

Handle multiplication first (* has higher precedence than + or -): 4 + 27 - 8

Perform addition and subtraction (left to right, based on associativity):

4 + 27 = 31

31 - 8 = 23

Final Result:
The value of the expression is 23.

Let me know if you'd like further clarification or similar examples!

*/
#include<stdio.h>

int main(void)
{
    int a=4,b=8,c=3,d=9,z;

    z=a++ + ++b * c-- - --d;
    printf("a=%d,b=%d,c=%d,d=%d,z=%d\n",a,b,c,d,z);
}