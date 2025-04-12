#include<stdio.h>

char ch='A';

void func(void)
{
asm mov dl,ch
asm mov ah,2
asm int 21h
}

main()
{
func();
}
