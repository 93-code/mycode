/* 09:50 2015-03-31 Tuesday */
#include <stdio.h>

int mswitch(int *a,int *b);
int mswitch1(int *a,int *b);
int mswitch2(int *a,int *b);
int main()
{
    int a = 10,b = 20;
    mswitch(&a,&b);
    printf("a = %d,b = %d\n",a,b);
    printf("------------------\n");

    mswitch1(&a,&b);
    printf("a = %d,b = %d\n",a,b);
    printf("------------------\n");
    
    mswitch2(&a,&b);
    printf("a = %d,b = %d\n",a,b);
    printf("------------------\n");

    return 0;
}

int mswitch(int *a,int *b)
{
    int tmp = 0;
    tmp = *a;
    *a = *b;
    *b = tmp;
    return 0;
}
int mswitch1(int *a,int *b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
    return 0;
}
int mswitch2(int *a,int *b)
{
    *a = *a - *b;
    *b = *a + *b;
    *a = *b - *a;
    return 0;
}
