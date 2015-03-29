/* 17:09 2015-03-23 Monday */
#include <stdio.h>
int main()
{
    int a[] = {0x11223344,0x55667788,0x99aabbcc};
    int *p = NULL;

    char *q = (char *)a;

    q++;
    p = (int *)q;

    printf("*p = %#x\n",*p);
    return 0;
}
