#include <stdio.h>

#define MAX 10

int main()
{
    int i = 0;
    int sum = 0;
    unsigned char tmp = 0;
    unsigned char buf[MAX];
    unsigned char *p = buf;
    unsigned char *q = buf + 9;

    for(i = 0;i < MAX;i++)
    {
        buf[i] = (i << 4) | i;	
        printf("%#x ",buf[i]);
    }

    putchar('\n');

    for(i = 0;i < MAX;i++)
    {
        sum = sum + buf[i];
    }

    printf("sum : %#x\n",sum);
    printf("----------------------------------\n");

    while(p < q)
    {
        tmp = *p;
        *p = *q;
        *q = tmp;

        p++;
        q--;
    }
    for (i = 0; i < MAX; i++)
    {
        printf("%#x ",buf[i]);
    }
    printf("\n");
    return 0;
}
