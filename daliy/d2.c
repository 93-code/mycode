#include <stdio.h>
#include <math.h>
/*编译时加参数-lm*/
int main()
{
    long int x,y,i;


    for(i = 0; i < 100000; i++)
    {
        x = sqrt(i+100);
        y = sqrt(i+268);

        if( (x*x == (i+100)) && (y*y == (i+268)))
            printf("%ld\n",i);
    }    

    return 0;
}
