/* 19:34 2015-03-26 Thursday */
#include <stdio.h>
int main()
{
    int i = 0;
    float sn = 100.0;
    float hn = sn/2; 

    for ( i = 2; i < 10; i++)
    {
       sn = sn + 2*hn;
       hn = hn/2;
    }

    printf("sn = %f,hn = %f;\n",sn,hn);
    return 0;
}
