/*23:00 星期四 2015-03-26*/
#include <stdio.h>

int fact(int j);
int main()
{
    int i = 0;

    for ( i = 0; i < 6; i++ )
    {
        printf("%d! = %d\n",i,fact(i));
    }
    return 0;
}


int fact(int j)
{
    int sum = 0;
    if ( 0 == j )
    {
        sum = 1;
    }
    else
    {
        sum = j*fact(j - 1);
    }
    return sum;
}
