/* 19:24 2015-03-30 Monday */
#include <stdio.h>
int main()
{
    int a[4]={0};
    int *p = a;
    int **q = &p;

    printf("a : %p\n",a);
    printf("p : %p\n",p);
    printf("*p : %d\n",*p);
    printf("q : %p\n",q);
    printf("*q : %p\n",*q);
    printf("**q : %d\n",**q);
    printf("&a : %p\n",&a);
    printf("&p : %p\n",&p);
    printf("&q : %p\n",&q);
    
    
    printf("=-================\n");
    printf("a : %p\n",a);
    printf("a+1 : %p\n",a+1);
    printf("&a : %p\n",&a);
    printf("&a+1 : %p\n",&a+1);
    printf("=-================\n");
    printf("a : %#x\n",a);
    printf("&a : %#x\n",&a);
    return 0;
}
