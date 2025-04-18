/*
A spiral matrix is n x n square matrix formed by placing the numbers 1,2,3,4......n^2 in spiral form starting form the leftmost column and topmost row.asmSpiral matrices can exist for both even and odd values of n.
The spiral matrices for n = 3 , n = 4 , n =7 are shown below - n = 3 , n = 4 , n = 7

As with growing complexity of the code / to declutter the logics of the program.
the spiral matrix program will go hand in hand with the gdb debugger on linux command line.asm

We can compile it with gcc -g -o0 spiral_matrix_gdb.c -o ./exe

  * The -g flag compiles the program with debugging symbols, which is going to make it a lot easier to look at our variables.
  * -o0 tells gcc to turn off optimizations So that the variables won't get optimized out.

run or r - Executes the program from start to end.
break or b - Sets a breakpoint on a particular line. Ex: b main / b 19 (line number) / b spiral_matrix_gdb.c:19 /b _func_name_ 

disable - Disables a breakpoint
enable - Enables a disabled breakpoint.
next or n - Executes the next line of code without diving into functions.
step - Goes to the next instruction, diving into the function.
list or l - Displays the code, if code has > 10 lines , one need to use the list command multiple times.
print or p - Displays the value of a variable.
quit or q - Exits out of GDB.
clear - Clears all breakpoints.
continue or c - Continues normal execution
backtrace or bt - show the trace of where you are currently. which function you are in . print stack back trace.
                - optiontionally you can move the call stack using up and doen commands.
finish - Run till exit

inside a function , variation of the info command prints the arguments passed to that function
info args , info args , info locals , info stack , info regsters , frame 

print variable-name - Print value sorted in variable. Ex: p i

start gdb using ,

$ gdb ./test

break and run , use the above commands to navigate through the code.

(gdb) b main / line number
(run) run

*/

#include <stdio.h>
#define MAX 20

int main(void)
{
    int n, i = 0, j = 0, l, u, num = 1, arr[MAX][MAX] = {0};
    printf("Enter value of n : ");
    scanf("%d", &n);
    l = 0;
    u = n - 1;

    for (num = 1; num <= n * n; num++)
    {
        arr[i][j] = num;
        if (i == 1 && j < u)
            j++;
        else if (j == u && i < u)
            i++;
        else if (i == u && j > 1)
            j--;
        else if (j == 1 && i > 1)
            i--;
        if (arr[i][j] != 0) /*if square already filled*/
        {
            l++;
            u--;
            i++;
            j++;
        }
    } /* End of for*/
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%4d", arr[i][j]);
        printf("\n");
    }
}
