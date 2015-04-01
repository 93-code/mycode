#include <stdio.h>
#include <math.h>

int main()
{
    /*long int a,b,c;*/
    float a,b,c;
    float s,area;

    printf("Input three num: ");
    /*scanf("<%ld,%ld,%ld>",&a,&b,&c);*/
    scanf("<%f,%f,%f>",&a,&b,&c);

    /*s = (a + b + c)/2 + (a + b + c)%2;*/
    s = (a + b + c)/2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("area = %10.3f\n",area);

    return 0;
}
