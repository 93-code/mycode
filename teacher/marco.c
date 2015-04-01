#include <stdio.h>

#define MAX 100

#define PI  3.14159

#define PRO_ID  'k'

#define STR "hello world"

#define ONE 1
#define TWO (ONE +\
    ONE)

#define AREA(a,b) ((a) * (b))

int main()
{

    printf("MAX = %d\n",MAX);

    printf("PI = %f\n",PI);

    printf("ONE = %d\n",ONE);
    
    printf("TWO = %d\n",TWO);

    printf("TWO * TWO = %d\n",TWO * TWO);

    //AREA(3,4) --> a * b
    //a * b  --> 3 * 4
    printf("AREA(3,4) = %d\n",AREA(3,4));

    printf("AREA(1 + 2,5 - 1) = %d\n",AREA(1 + 2,5 - 1));

    return 0;
}
