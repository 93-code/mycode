#include <stdio.h>
int main()
{
    /*int year = 0,i;*/
    int i;

    /*printf("Input the year:");*/
    /*scanf("%d",&year);*/

    for (i = 1000; i < 3000; i++)
    {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
        {
            printf("%d ",i);

            if (i % 5 == 0)
                printf("\n");
        }
    }
    return 0;
}
