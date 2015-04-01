/* 16:02 2015-03-20 Friday */
#include <stdio.h>
#define N 5

int main()
{
    int i = 0,j = 0;
    int a[N] = {0};
    int tmp = 0;

    printf("Input num: ");
    for ( i = 0; i < N; i++)
        scanf("%d",&a[i]);
    puts("");

    for ( i = 0;i < N; i++)
        printf("%-3d",a[i]);
    puts("");

    for ( i = 0; i < N-1; i++)
    {
        for ( j = i + 1; j < N; j++)
        {
            if ( a[i] > a[j] )
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for ( i = 0;i < N; i++)
        printf("%-3d",a[i]);
    puts("");

    return 0;
}

