#include <stdio.h>

int main()
{
    int a = -30;
    unsigned int b = 29;

    /*if(a + b < 0)*/
    //if(a + (int)b < 0)
    if((int)(a + b) < 0)
    {
        printf("a + b < 0\n");
    }
    else 
    {
        printf("a + b >= 0\n");
    }

    printf("a + b = %u\n",a + b);
    printf("a + b = %d\n",a + b);

    a = 300;

    //ǿת����ʱ��ת������Ӱ��ת�������ֵ����������
    printf("a = %d\n",a);
    printf("    (char)a = %d\n",(char)a);
    printf("        a = %d\n",a);

    return 0;
}
