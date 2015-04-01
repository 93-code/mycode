/* 16:54 2015-03-30 Monday */
#include <stdio.h>
int main()
{
    int a[10] = {1,3,5,7,9,2,4,6,8,10};
    int *p_max = a;
    int *p_min = a;
    int i = 0,j = 0;

    for (i = 0; i < 10; i++)
    {
        if ( *p_max < a[i] )
            p_max = a+i;
        if ( *p_min > a[i] )
            p_min = a+i;
    }
    printf("max=%d\n",*p_max);
    printf("min=%d\n",*p_min);

    
    return 0;
}
