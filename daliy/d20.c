/* 16:05 2015-03-28 Saturday */
/*判断一个数是否为回文数*/
#include <stdio.h>
#define N 20

int main()
{
    int a[N] = {0};
    int i = 0;
    int * p = a;
    int * q = NULL;

    printf("Input an num:");
    
    while ((a[i] = getchar()) != '\n') //回车时结束
    {
        i++;
        if ( i > N )
        {
            printf("Error data...\n");
            return -2;
        }
    }
    /*a[i] = '\0';//添加一个xxxx*/

    q = a + i -1;//使指针指向最后一个数字

    while ( p <= q )
    {
        p++;
        q--;

        if ( *p != *q )
        {
            printf("no\n");
            return -1;
        }
    }
    printf("yes\n");

    return 0;
}

