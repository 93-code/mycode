/* 16:05 2015-03-28 Saturday */
/*�ж�һ�����Ƿ�Ϊ������*/
#include <stdio.h>
#define N 20

int main()
{
    int a[N] = {0};
    int i = 0;
    int * p = a;
    int * q = NULL;

    printf("Input an num:");
    
    while ((a[i] = getchar()) != '\n') //�س�ʱ����
    {
        i++;
        if ( i > N )
        {
            printf("Error data...\n");
            return -2;
        }
    }
    /*a[i] = '\0';//���һ��xxxx*/

    q = a + i -1;//ʹָ��ָ�����һ������

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

