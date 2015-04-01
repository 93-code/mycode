/* 19:45 2015-03-19 Thursday */
#include <stdio.h>
#include <math.h>

int main()
{
    int m,i,leap = 1;
    int count = 0;

    for (m = 101; m <= 200; m++)
    {
        for ( i = 2; i <= sqrt(m); i++)
        {
            if( m % i == 0)
            {
                leap = 0;
                break;
            }
        } 
        if(leap)
        {
            printf("%-4d",m);
            count++;
            if(count % 10 == 0)
                puts("\n");
        }
        leap = 1;
    }

                puts("\n");
    return 0;
}
