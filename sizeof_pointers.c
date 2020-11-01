/***************************************************************************
2. main(){
         int ivar,*iptr=&ivar;
         char cvar,*cptr=&cvar;
         float fvar,*fptr=&fptr;
         printf(“\n %d %d %d”,sizeof(iptr), sizeof(fptr), sizeof(cptr)); }
****************************************************************************/

#include<stdio.h>

main()
{
		int ivar,*iptr=&ivar;
         char cvar,*cptr=&cvar;
         float fvar,*fptr=&fvar;
         printf("\n %d %d %d \n",sizeof(iptr), sizeof(fptr), sizeof(cptr));
}
