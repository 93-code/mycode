/* 20:09 2015-03-31 Tuesday */
#include <stdio.h>
int fun(int n);
int main()
{
    int a = 5;
    int sum = 0;

    sum = fun(a);
    printf("sum = %d\n",sum);
    return 0;
}

int fun(int n)
{
    if (n <= 1)
        return 1;
    return n * fun(n-1);
}
