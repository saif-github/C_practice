/*
The Tower of Hanoi is a classic mathematical puzzle that involves three rods and  disks of different sizes. The goal is to move all the disks from the first rod (source) to the third rod (destination), using the second rod (auxiliary) as an intermediate, following these rules:
Only one disk can be moved at a time.
A larger disk cannot be placed on top of a smaller disk.
Disks can only be moved from the top of a stack.
Steps to Solve for  Disks:
Move the top  disks from the source rod to the auxiliary rod, using the destination rod as an intermediate.
Move the largest (nth) disk directly from the source rod to the destination rod.
Move the  disks from the auxiliary rod to the destination rod, using the source rod as an intermediate.
This recursive approach is key: each step reduces the problem to a smaller version of itself.

These were the solutions for n=1, n=2,n=3. 
From these solutions we can observe that first we move n-1 disk from source pillar (S) to temporary pillar (T)
and then move the lardgest disk to destination pillar (D).So the general solution for the n disks can be written as -

1. Move upper n-1 disks from S to T
2. Move nth disks from S to D.
3. Move n-1 disks from T to D.
*/


#include<stdio.h>

main()
{
    char source= 'S' , temp='T' , dest = 'D';
    int ndisk;
    printf("Enter the number of disk :");
    scanf("%d",&ndisk);
    printf("Sequence is : \n");
    tofh(ndisk,source,temp,dest);
}

void tofh(int ndisk,char source,char temp,char dest)
{
    if(ndisk>-1)
    {
        tofh(ndisk-1,source,dest,temp);
        printf("Move Disk %d %c --> %c\n",ndisk,source,dest);
        tofh(ndisk-1,temp,source,dest);
    }
} /*End of tofh*/
