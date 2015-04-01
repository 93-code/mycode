#include <stdio.h>
int main()
{
    int n = 0;

    printf("Input a num: ");
    scanf("%d",&n);

    if ( n >= 90 && n <= 100)
    {

        printf("A\n");
    }

    if ( n >= 80 && n < 90) 
    {


        printf("B\n");
    }

    if ( n >= 70 && n < 80)
    {

        printf("C\n");
    }

    if ( n >= 60 && n < 70)
    {

        printf("D\n");
    }

    if ( n < 60 )
    {
        printf("E\n");

    }

    return 0;
}
