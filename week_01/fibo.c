/* 14:54 2015-03-20 Friday */
#include <stdio.h>
#define N 10
int main()
{
    int a[N]={1,1};
    int i=0,j=N-1;
    int tmp = 0;
    
    for (i = 2; i < N; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }

    for (i = 0; i < N; i++)
    {
        printf("a[%d] = %-2d",i,a[i]); 
    }
    puts("");

    /*for (i = N-1; i >= 0; i--)*/
    /*{*/
        /*printf("%-3d",a[i]);*/
    /*}*/
    for ( i = 0; i < j; i++,j--)
    {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }

    for ( i = 0; i < N; i++)
        printf("a[%d] = %-3d",i,a[i]);
    puts("");

    return 0;
}
