/*22:50 星期四 2015-03-26*/
#include <stdio.h>
int main()
{
    int i = 0;
    float n = 1,s = 0;

    for ( i = 1; i < 20; i++ )
    {
        n *= i;
        s += n;
    }
    printf("s = %e\n",s);

    return 0;
}
