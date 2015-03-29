/* 16:46 2015-03-20 Friday */
#include <stdio.h>
#define N 5
int main()
{
    int i = 0,j = 0,k = 0;
    int tmp = 0;
    int a[N]={12,23,21,1,22};

    for ( i = 0; i < N -1; i++)
    {
        k = i;
        for ( j = k + 1; j < N; j++)
        {
            if (a[k] > a[j])
            {
                k = j;
            }
            if ( k != i)
            {
                tmp = a[k];
                a[k] = a[i];
                a[i] = tmp;
            }
        }
    }
    for ( i = 0; i < N; i++)
        printf("%-3d",a[i]);
    puts("");

    return 0;
}
