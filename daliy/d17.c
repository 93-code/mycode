/* 19:50 2015-03-26 Thursday */
#include <stdio.h>
int main()
{
#if 1
    int s = 1;
    int i = 0;

    for ( i = 1; i <= 9; i++ )
    {
        s = 2*(s +1);
    }
    printf("s = %d\n",s);
#else
    int day,x1,x2;
    
    day = 9;
    x2 = 1;

    while (day > 0)
    {
        x1 = (x2+1)*2;
        x2 = x1;
        day--;
    }
    printf("%d\n",x1);
#endif
    return 0;
}
