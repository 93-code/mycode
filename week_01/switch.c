#include <stdio.h>
int main()
{

    float n = 0;

    printf("Input score: ");
    scanf("%f",&n);


    if ( n > 100 || n < 0)
    {
        printf("Error Data\n");
        return -1;
    }
    switch (  (int)n/10 )
    {
        case 6:
            puts("D");
            break;
        case 7:
            puts("C");
            break;
        case 8:
            puts("B");
            break;
        case 9:
        case 10:
            puts("A");
            break;
        default:
            puts("E");
             
    }
    return 0;
}
             
