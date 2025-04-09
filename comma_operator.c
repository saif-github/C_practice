/*
 The comma operator in C has the least precedence. 
 The comma operator in C ensures that two or more expressions separated by commas are evaluated one by one from left to right, 
 and the result of the entire expression is the value of the rightmost expression. 
 The comma operator in C is primarily a binary operator that operates on the first available operand, discards the result, 
 evaluates the operands that follow, and then returns the value.

 intresting article on comma operator use case  https://www.embeddedrelated.com/showarticle/804.php
 */

 #include<stdio.h>

int main()
{
    {
        //Comma as an Operator
        int x;
        int a = (x=2,x+4);
        printf("%d\n", a);
    }

    {
        //Comma as a Separator
        int a = 10, b = 20, c = 30;
        printf("%d %d %d\n", a, b, c);
    }

    {
        //Comma Operator in Multiple Initialization
        int b=(10,20,30); //correct
        printf("%d \n",b);       
    }

    {
        //Comma Operator in Updating Values
        int i = 100;
        printf("%d %d\n", i, i++);
    }

    {
        //Comma Operator in if Condition
        int x = 50, y = 25;
        if(x > y, x < y)
            printf("if condition executes\n");
        else
            printf("else condition executes\n");
    }

	return 0;
}
