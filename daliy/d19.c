/* 08:58 2015-03-27 Friday */
#include <stdio.h>
int main()
{
    int n = 5;
    
    printf("age = %d\n",age(n));
    return 0;

}

int age(int n)
{
    int c = 0;
    if ( 1 == n )
    {
        c = 10;
    }
    else
    {
        c = age(n-1)+2;
    }
    return c;
}
