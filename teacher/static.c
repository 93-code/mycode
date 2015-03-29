#include <stdio.h>

int a;

void test1()
{
    //static int a;// = 10;

    printf("    a = %d &a = %p\n",a,&a);

    a = a + 1;

    return ;
}

void test2()
{
    int b;// = 20;

    printf("b = %d &b = %p\n",b,&b);

    b = b + 1;

    return ;
}

int test(int n)
{
    if(n == 0)
        return 0;

    test1();

    test2();

    return test(n - 1);
}

int main()
{

    test(3);


    return 0;
}
