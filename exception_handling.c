/****************test file******************/
#include <stdio.h>
#include <stdlib.h>

#define ERR_OK 		0
#define ERR_MALLOC 	1


int main (void)
{

         int   error;
         char  *block1, *block2, *block3,*block4;

         error  = ERR_OK;
         block1 = NULL;
         block2 = NULL;
         block3 = NULL;

         block1 = (char*) malloc( 1024 );
         if ( block1 == NULL ) goto Fail;

         block2 = (char*) malloc( 1024 );
         if ( block2 == NULL ) goto Fail;

         block3 = (char*) malloc( 1024 );
         if ( block3 == NULL ) goto Fail;

	//if ( block4 == NULL ) goto Fail;

	printf("exit happily\n");

       Exit:
         if (block3) free( block3 );
         if (block2) free( block2 );
         if (block1) free( block1 );
         return error;

       Fail:
         error = ERR_MALLOC;
	printf("exit unhappily\n");
         goto Exit;
}
