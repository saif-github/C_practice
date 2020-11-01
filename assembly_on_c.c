#include<stdio.h>
void func(void);

char ch='A';
main()
{
func();
}
void func(void)
{
asm mov dl,ch
asm mov ah,2
asm int 21h
}
