/* 09:51 2015-03-20 Friday */
#include <stdio.h>
int main()
{
    int x=0,y=0,z=0;
    int num = 100;

    /*printf("Input a num: \n");*/
    /*scanf("%d",&num);*/
    while ( num >= 100 && num <= 999)
    {
        x = num / 100;
        y = num /10 % 10;
        z = num % 10;

        if ( num == (x*x*x + y*y*y + z*z*z))
        {
            printf("%5d",num);
        }

        num++;
    }
    puts("");
    return 0;
}
