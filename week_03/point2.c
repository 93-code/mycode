/* 15:16 2015-03-30 Monday */
#include <stdio.h>
int main()
{
    int i = 0;
    int t = 0;

    for (i = 0; i < 10; i++)
    {
        t = i << 4;
        printf("%#x\n",i|t);
    }
    return 0;
}
