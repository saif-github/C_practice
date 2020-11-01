
#include <stdio.h>

#define message_for(a,b)  \ 
printf(#a " and " #b ": We love you!\n")		//for macro continuation (\)


int main( void )
{
	message_for(Tina,Mina);			//stringize(#)
	return 0;
}
