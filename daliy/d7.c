/*2015-03-19*/
#include <stdio.h>
int main()
{
    int i,j,r;

    for(i = 1;i < 10;i++)
    {
        for(j = 1;j <= i;j++)
        {
            r = i*j;
            printf("%d * %d = %-4d",j,i,r);

        }
        printf("\n");
    }

    return 0;
}
