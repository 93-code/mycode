/* 10:12 2015-04-01 Wednesday */
#include <stdio.h>
int base = 10;
int test()
{
    int sum = 0;
    int i = 0;

    for (i = 1; i <= base; i++)
    {
        sum = sum+i;
    }
    return sum;
}
