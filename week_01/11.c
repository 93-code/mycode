/* 11:52 2015-03-20 Friday */
#include <stdio.h>
#include <math.h>

int main()
{
    int i=0,j=0;
    int leap = 1;
    int count = 0;
    
    for (i = 2; i <= 100; i++)
    {
        for (j = 2; j <= sqrt(i+1); j++)
        {
            if ( i % j == 0)
            {
                leap = 0;
                break;
            }
        }
        if(leap)
        {
            printf("%-4d",i);
            count++;
            if ( count % 5 == 0)
                printf("\n");
        }
        leap = 1;
    }
    return 0;
}
