/* 11:10 2015-04-01 Wednesday */
#include <stdio.h>
#include <stdlib.h>

int *fun(int m);
int *fun1(int m,int n);

int main()
{
    int *q = NULL;
    int *qp = NULL;
    q = fun(100);

    printf("1+2+..+100 = %d\n",*q);

    free(q);
    printf("---------------------\n");
    qp = fun1(100,29);
    printf("Max = %d",*qp);
    free(qp);
    return 0;
}

int *fun(int m)
{
    int *p = (int *)malloc(sizeof(int));
    *p = 0;
    int i = 0;

    for (i = 1; i <= m; i++)
    {
        *p += i;
    }
    return p;
}
int *fun1(int m,int n)
{
    int *pq = (int *)malloc(sizeof(int));

    if ( m > n )
        *pq = m;
    else
        *pq = n;
    return pq;
}


