#include <stdio.h>
int main(void)
{
    int x=5,y=2;
    float p,q;
    p=x/y;
    printf("p = %f\n",p);
    /*cast operator temporarily converted the int variable x into float type
     and so floating point arthimetic took place
      and fractional part was not lost*/
    q=(float)x/y;
    printf("q = %f\n",q);
}
