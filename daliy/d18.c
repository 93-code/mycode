/* 08:50 2015-03-27 Friday */
#include <stdio.h>
void palin(int n);

int main()
{
    int n = 5;

    palin(n);
    puts("");

    return 0;
}

void palin(int n)
{
    char next;
    if ( n <= 1 )
    {
        next = getchar();
        puts("");
        putchar(next);
    }
    else
    {
        next = getchar();
        palin(n - 1);
        putchar(next);
    }
}
