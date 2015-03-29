/* 17:40 2015-03-23 Monday */
#include <stdio.h>
#include <string.h>
#define N 25

int main()
{
    int a[N];
    char *p = NULL;
    int i = 0,j = 0;
    p =(char *)a;

    printf("Input strings....\n");
         scanf("%99[^\n]",p);

    puts(p);

    j = strlen(p) - 1;
    printf("j = %d\n",j);

    while (i < j)
    {
        p[i] ^= p[j];
        p[j] ^= p[i];
        p[i] ^= p[j];
        i++;
        j--;
    }
    puts(p);


    return 0;
}
