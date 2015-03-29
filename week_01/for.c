/* 10:24 2015-03-20 Friday */
#include <stdio.h>
int main()
{
    int i,j,k;

    for (i = 1; i <= 9; i++)
    {
        for (k = i; k <=8; k++)
            printf("        ");
        
        for (j = 1; j <=i; j++)
        {
            printf("%d*%d=%-4d",j,i,j*i);

        }
        printf("\n");
    }
    puts("");
    return 0;
}
