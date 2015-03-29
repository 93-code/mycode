/* 20:21 2015-03-25 Wednesday */
#include <stdio.h>
#define N 20

int myatoi(char * s);
int main()
{
    char a[N] = {0};
    int i = 0;
    int num = 0;

    printf("Input num string....");
        scanf("%[0-9]",a);

        puts(a);
    num = myatoi(a);

    printf("num = %d\n",num);

    return 0;
}

int myatoi(char * s)
{
    int num = 0;
   char ch = 0; 
    while (ch = *s++)
    {
        if ( '0' <= ch && ch <= '9' )
        {
            num = num*10 + (ch - '0');
        }
        else
        {
            printf("Error data\n");
            return -1;
        }
    }
    return num;
}


