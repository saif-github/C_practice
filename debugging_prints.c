#include<stdio.h>
#define DEBUG

#ifdef DEBUG 
    #define SHOW(message) printf message
#else
    #define SHOW(message)
#endif

main()
{
    int x, y ;
    SHOW(("Starting main()\n"));

    func();

    SHOW(("Now value of x = %d and y = %d \n",x,y));
}

func()
{
    SHOW(("Inside func()\n"));
}
