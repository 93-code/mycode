/* 14:50 2015-03-30 Monday */
#include <stdio.h>
int main()
{
    int a = 30,b = 10;
    int *pa = &a;
    int *pb = &b;

    printf("a + b = %d\n",*pa + *pb);
    printf("a - b = %d\n",*pa - *pb);
    printf("a * b = %d\n",*pa * *pb);
    printf("a / b = %d\n",*pa / *pb);

    return 0;
}
