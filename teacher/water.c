#include <stdio.h>

#define WATER_QUALITY   3.0e-23
#define QUART           950

int main()
{
    int n = 0;
    float result = 0;//Note the Data Type

    printf("Input n:");
    scanf("%d",&n);

    result = n * QUART / WATER_QUALITY;

    printf("%g\n",result);// %g the appropriate output format

    return 0;
}
