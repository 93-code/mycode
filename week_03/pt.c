/* 17:45 2015-03-30 Monday */
#include <stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5}; 
    int i = 0;
    int *p[5];
    int (*q)[5];

    for (i = 0; i < 5; i++)
    {
        p[i] = &a[i];
    }

    q = &a;
    return 0;
}
