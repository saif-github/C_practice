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

    for (num=1; num<=n*n; num++)
    {
        arr[i][j] = num;
        if (i == l && j < u)
            j++;
        else if (j==u && i<u)
            i++;
        else if (i==u && j>l)
            j--;
        else if (j==l && i>l)
            i--;
        if (arr[i][j] != 0) /*if square already filled*/
        {
            l++;
            u--;
            i++;
            j++;
        }
    } /* End of for*/
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
            printf("%4d", arr[i][j]);
        printf("\n");
    }
}

/*
saif@saif-Inspiron-5547:~/programmer/C_practice$ gdb ./exe
GNU gdb (Ubuntu 8.2-0ubuntu1~16.04.1) 8.2
Copyright (C) 2018 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./exe...done.
(gdb) b 59
Breakpoint 1 at 0x4006f2: file spiral_matrix_gdb.c, line 59.
(gdb) run
Starting program: /home/saif/programmer/C_practice/exe 
Enter value of n : 4

Breakpoint 1, main () at spiral_matrix_gdb.c:59
59	        if (i == l && j < u)
(gdb) info local
n = 4
i = 0
j = 0
l = 0
u = 3
num = 1
arr = {{1, 0 <repeats 19 times>}, {0 <repeats 20 times>} <repeats 19 times>}
(gdb) c
Continuing.

Breakpoint 1, main () at spiral_matrix_gdb.c:59
59	        if (i == l && j < u)
(gdb) info local
n = 4
i = 0
j = 1
l = 0
u = 3
num = 2
arr = {{1, 2, 0 <repeats 18 times>}, {0 <repeats 20 times>} <repeats 19 times>}
(gdb) c
Continuing.

Breakpoint 1, main () at spiral_matrix_gdb.c:59
59	        if (i == l && j < u)
(gdb) info local
n = 4
i = 0
j = 2
l = 0
u = 3
num = 3
arr = {{1, 2, 3, 0 <repeats 17 times>}, {0 <repeats 20 times>} <repeats 19 times>}
(gdb) c
Continuing.

Breakpoint 1, main () at spiral_matrix_gdb.c:59
59	        if (i == l && j < u)
(gdb) info local
n = 4
i = 0
j = 3
l = 0
u = 3
num = 4
arr = {{1, 2, 3, 4, 0 <repeats 16 times>}, {0 <repeats 20 times>} <repeats 19 times>}
(gdb) c
Continuing.

Breakpoint 1, main () at spiral_matrix_gdb.c:59
59	        if (i == l && j < u)
(gdb) info local
n = 4
i = 1
j = 3
l = 0
u = 3
num = 5
arr = {{1, 2, 3, 4, 0 <repeats 16 times>}, {0, 0, 0, 5, 0 <repeats 16 times>}, {0 <repeats 20 times>} <repeats 18 times>}
(gdb) c
Continuing.

Breakpoint 1, main () at spiral_matrix_gdb.c:59
59	        if (i == l && j < u)
(gdb) info local
n = 4
i = 2
j = 3
l = 0
u = 3
num = 6
arr = {{1, 2, 3, 4, 0 <repeats 16 times>}, {0, 0, 0, 5, 0 <repeats 16 times>}, {0, 0, 0, 6, 0 <repeats 16 times>}, {
    0 <repeats 20 times>} <repeats 17 times>}
(gdb) c
Continuing.

Breakpoint 1, main () at spiral_matrix_gdb.c:59
59	        if (i == l && j < u)
(gdb) info local
n = 4
i = 3
j = 3
l = 0
u = 3
num = 7
arr = {{1, 2, 3, 4, 0 <repeats 16 times>}, {0, 0, 0, 5, 0 <repeats 16 times>}, {0, 0, 0, 6, 0 <repeats 16 times>}, {0, 0, 0, 7, 
    0 <repeats 16 times>}, {0 <repeats 20 times>} <repeats 16 times>}
(gdb) c
Continuing.

Breakpoint 1, main () at spiral_matrix_gdb.c:59
59	        if (i == l && j < u)
(gdb) info local
n = 4
i = 3
j = 2
l = 0
u = 3
num = 8
arr = {{1, 2, 3, 4, 0 <repeats 16 times>}, {0, 0, 0, 5, 0 <repeats 16 times>}, {0, 0, 0, 6, 0 <repeats 16 times>}, {0, 0, 8, 7, 
    0 <repeats 16 times>}, {0 <repeats 20 times>} <repeats 16 times>}
(gdb) c
Continuing.

Breakpoint 1, main () at spiral_matrix_gdb.c:59
59	        if (i == l && j < u)
(gdb) info local
n = 4
i = 3
j = 1
l = 0
u = 3
num = 9
arr = {{1, 2, 3, 4, 0 <repeats 16 times>}, {0, 0, 0, 5, 0 <repeats 16 times>}, {0, 0, 0, 6, 0 <repeats 16 times>}, {0, 9, 8, 7, 
    0 <repeats 16 times>}, {0 <repeats 20 times>} <repeats 16 times>}
(gdb) c
Continuing.

Breakpoint 1, main () at spiral_matrix_gdb.c:59
59	        if (i == l && j < u)
(gdb) info local
n = 4
i = 3
j = 0
l = 0
u = 3
num = 10
arr = {{1, 2, 3, 4, 0 <repeats 16 times>}, {0, 0, 0, 5, 0 <repeats 16 times>}, {0, 0, 0, 6, 0 <repeats 16 times>}, {10, 9, 8, 7, 
    0 <repeats 16 times>}, {0 <repeats 20 times>} <repeats 16 times>}
(gdb) c
Continuing.

Breakpoint 1, main () at spiral_matrix_gdb.c:59
59	        if (i == l && j < u)
(gdb) info local
n = 4
i = 2
j = 0
l = 0
u = 3
num = 11
arr = {{1, 2, 3, 4, 0 <repeats 16 times>}, {0, 0, 0, 5, 0 <repeats 16 times>}, {11, 0, 0, 6, 0 <repeats 16 times>}, {10, 9, 8, 7, 
    0 <repeats 16 times>}, {0 <repeats 20 times>} <repeats 16 times>}
(gdb) c
Continuing.

Breakpoint 1, main () at spiral_matrix_gdb.c:59
59	        if (i == l && j < u)
(gdb) info local
n = 4
i = 1
j = 0
l = 0
u = 3
num = 12
arr = {{1, 2, 3, 4, 0 <repeats 16 times>}, {12, 0, 0, 5, 0 <repeats 16 times>}, {11, 0, 0, 6, 0 <repeats 16 times>}, {10, 9, 8, 7, 
    0 <repeats 16 times>}, {0 <repeats 20 times>} <repeats 16 times>}
(gdb) c
Continuing.

Breakpoint 1, main () at spiral_matrix_gdb.c:59
59	        if (i == l && j < u)
(gdb) info local
n = 4
i = 1
j = 1
l = 1
u = 2
num = 13
arr = {{1, 2, 3, 4, 0 <repeats 16 times>}, {12, 13, 0, 5, 0 <repeats 16 times>}, {11, 0, 0, 6, 0 <repeats 16 times>}, {10, 9, 8, 7, 
    0 <repeats 16 times>}, {0 <repeats 20 times>} <repeats 16 times>}
(gdb) c
Continuing.

Breakpoint 1, main () at spiral_matrix_gdb.c:59
59	        if (i == l && j < u)
(gdb) info local
n = 4
i = 1
j = 2
l = 1
u = 2
num = 14
arr = {{1, 2, 3, 4, 0 <repeats 16 times>}, {12, 13, 14, 5, 0 <repeats 16 times>}, {11, 0, 0, 6, 0 <repeats 16 times>}, {10, 9, 8, 7, 
    0 <repeats 16 times>}, {0 <repeats 20 times>} <repeats 16 times>}
(gdb) c
Continuing.

Breakpoint 1, main () at spiral_matrix_gdb.c:59
59	        if (i == l && j < u)
(gdb) info local
n = 4
i = 2
j = 2
l = 1
u = 2
num = 15
arr = {{1, 2, 3, 4, 0 <repeats 16 times>}, {12, 13, 14, 5, 0 <repeats 16 times>}, {11, 0, 15, 6, 0 <repeats 16 times>}, {10, 9, 8, 7, 
    0 <repeats 16 times>}, {0 <repeats 20 times>} <repeats 16 times>}
(gdb) c
Continuing.

Breakpoint 1, main () at spiral_matrix_gdb.c:59
59	        if (i == l && j < u)
(gdb) info local
n = 4
i = 2
j = 1
l = 1
u = 2
num = 16
arr = {{1, 2, 3, 4, 0 <repeats 16 times>}, {12, 13, 14, 5, 0 <repeats 16 times>}, {11, 16, 15, 6, 0 <repeats 16 times>}, {10, 9, 8, 7, 
    0 <repeats 16 times>}, {0 <repeats 20 times>} <repeats 16 times>}
(gdb) c
Continuing.
   1   2   3   4
  12  13  14   5
  11  16  15   6
  10   9   8   7
[Inferior 1 (process 9660) exited normally]

*/