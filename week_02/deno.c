/*22:37 星期四 2015-03-26*/
#include <stdio.h>
int main()
{
    int i = 0;
    float a = 2,b = 1,t = 0;
    float  s = 0;

    for ( i = 0; i < 10; i++ )
    {
        s = s + a/b;
        t = a + b;
        b = a;
        a = t;
    }
    printf("2/1+3/2+5/3+...= %7.5f",s);
    puts("");
    return 0;
}
