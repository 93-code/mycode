#include <stdio.h>

int main()
{
    /*int i = 0,j = 0;*/
    register int i = 0,j = 0;

    for(i = 0;i < 10000;i++)
    {
        for(j = 0;j < 100000;j++)
            ;
    }

    return 0;
}
