/*22:24 星期一 2015-03-23*/
#include <stdio.h>

int main()
{
    int n = 0,m = 0,i = 0;

    for (m = 1; m <= 1000; m++)
    {
        n = 0;
        for (i = 1; i < m; i++)
        {
            if (m % i == 0)
            {
                n += i;
            }
        }
        if (n == m)
        {
            printf("%-3d",n);
        }
    }
    puts("");

    return 0;
}
