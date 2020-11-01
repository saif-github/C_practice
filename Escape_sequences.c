#include<stdio.h>

main()
{
printf("C is like Sea\n");				//moves the cursor to beginning of the current line
printf("C is like Sea\aThat never ends...\n");		//produces a beep sound
printf("C is like Sea\rThat never ends...\n");		//moves the cursor to begining of the current line
printf("C is like Sea\b \n");				//backspace
printf("C is like Sea\fThat never ends...\n");		//formfeed-->moves the cursor to the initial position of the next logical page
printf("C is like Sea\vThat never ends...\n");		//vertical tab
printf("C is like Sea\tThat never ends...\n");		//horizontal tab
printf("C is like Sea\\That never ends...\n");		//backslash
printf("C is like Sea\0That never ends...\n");		//NULL
printf("Indian\b is great\n");
printf("New\rDelhi\n");
}
