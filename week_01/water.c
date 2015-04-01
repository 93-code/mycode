#include <stdio.h>
#define N 3.0e-23
#define Q 950 

int main()
{
    int b;
    float r;

    printf("enter num:");
    scanf("%d",&b);
    
    r = (Q * b) / N;
    
    printf("r = %g \n",r);

    return 0;

}
