#include <stdio.h>

int global_variable_bss;
char name[20]="jhonson & jhonson";

int main(void)
{
    static int i = 10;
    return 0;
}


/*
linux command for checking memory layout 

gcc memory_layout.c -o memory_layout
size memory_layout


   text	   data	    bss	    dec	    hex	filename
   1051	    560	      8	   1619	    653	memory_layout

*/
