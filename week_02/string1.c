/* 11:13 2015-03-23 Monday */
#include <stdio.h>

int main()
{
    int i = 0,j = 0;
    int count = 0;
    char buf[10] = "123454321";

    while ( buf[i] != '\0' )
    {
        count++;
        i++;
    }
    printf("%d\n",count);
    for ( i = 0,j = count - 1; i <= j; i++,j-- )
    {
        if ( buf[i] != buf[j] )
        {
            printf("False\n");
            return -1;
        }
    }
    printf("True\n");
    return 0;
}
