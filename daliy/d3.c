#include <stdio.h>
int main()
{
    int year = 0;
    int leap = 0;

    printf("Input the year:");
    scanf("%d",&year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        leap = 1;
    else
        leap = 0;

    if ( leap == 1)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
