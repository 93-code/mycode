/* 14:35 2015-03-31 Tuesday */
#include <stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);

int pfun(int a,int b,int (*p)(int,int));

int main()
{
    int a = 30,b = 20;
    printf("a + b = %d\n",pfun(a,b,add));
    printf("a - b = %d\n",pfun(a,b,sub));
    printf("a * b = %d\n",pfun(a,b,mul));
    printf("a / b = %d\n",pfun(a,b,div));
    return 0;
}

int add(int a,int b)
{
    return a + b;
}
int sub(int a,int b)
{
    return a - b;
}
int mul(int a,int b)
{
    return a * b;
}
int div(int a,int b)
{
    return a / b;
}
int pfun(int a,int b,int (*p)(int,int))
{
    return p(a,b);
}
