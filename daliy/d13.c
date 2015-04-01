/* 20:04 2015-03-23 Monday */
#include <stdio.h>
int main()
{
    int num = 0;
    int i = 0;

    printf("Input a num: ");
    scanf("%d",&num);
    printf("%d=",num);

    for (i = 2; i <= num; i++)
    {
        while ( num != i )
        {
            if ( num % i ==0 )
            {
                printf("%d*",i);
                num /= i;
            }
            else
            {
                break;
            }
        }
    }
    printf("%d",num);
    puts("");
    return 0;
}
