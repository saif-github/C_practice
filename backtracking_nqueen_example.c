/*

Backtracking means taking a step back , tracing the route back upto particular checkpoint from where you can again go ahead 
and take another route to your desired destination.

The N Queen is the problem of placing N chess queens on an NxN chessboard so that no two queens attack each other. 
For Example , following is a soulution for 4 Queen problem.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int chess_board[20],count;

void nqueen_function(int row , int num)
{
    int col;
    for (col = 1;col<=num;col++)
    {
        if(placeholder(row,col))
        {
            chess_board[row] = col;
            if(row == num)
            {
                display(num);
            }
            else{
                nqueen_function(row+1,num);
            }
        }
    }
}

int placeholder(int row,int col)
{
    int count;
    for (count = 1;count <= row-1;count++)
    {
        if(chess_board[count] == col)
        {
            return 0;
        }
        else
        {
            if (abs(chess_board[count]- col) == abs(count - row))
            {
                return 0;
            }
        }
    }
    return 1;

}

int display(int num)
{
    int m,n;

    printf("\n\n\t Possible Solution %d : \n\n", ++count);

    for(m=1; m <= num ; m++)
    {
        printf("\t[%d]",m);
    }

    for (m = 1; m <= num ; m++)
    {
        printf("\n\n[%d]",m);

        for(n = 1; n <= num; n++)
        {
            if(chess_board[m] == n)
            {
                printf("\tQ");
            }
            else
            {
                printf("\t*");
            }
        }
    }
}

int main()
{
    int num;
    printf("\nEnter Number of Queens \t");
    scanf("%d", &num);

    if (num <= 3)
    {
        printf("\n number should be greater than 3 to from a Matrix \n");
    }
    else
    {
        nqueen_function(1,num);
    }
    printf("\n\n");
    
    return 0;
}

