#include <stdio.h>

int main()
{
    /*unsigned char a = 0;*/
    char a = -128;
    int i = 0;

    for(i = 1;i <= 300;i++)
    {
        printf("%-5d",a);

        a = a + 1;

        if(i % 10 == 0)
        {
            printf("\n");
        }
    }


    return 0;
}
