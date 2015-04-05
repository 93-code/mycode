/* 10:14 2015-04-01 Wednesday */
#include <stdio.h>
int main()
{
    extern int base;
    extern int test();

    printf("base = %d\n",base);
    printf("sum = %d\n",test());
    return 0;
}
