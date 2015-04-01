/* 20:06 2015-03-20 Friday */
#include <stdio.h>
#define N 10
int main()
{
    int a[N][N] = {0};
    int i = 0,j = 0;

#if 0/*{{{*/
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            if ( i == j) 
            {
                a[i][j] =1;
            }
        }
        a[i][0] = 1;
    }
#endif/*}}}*/
    for (i = 0; i < N; i++)
    {
        a[i][0] = a[i][i] = 1;
    }

    for ( i = 2; i < N; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            a[i][j] = a[i-1][j-1] + a[i-1][j]; 
        }
    }
    
    for ( i = 0; i < N; i++ )
    {
        for ( j = 0; j <= i; j++)
            printf("%-5d",a[i][j]);
        puts("");
    }
    return 0;
}
