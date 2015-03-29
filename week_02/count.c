/* 16:03 2015-03-21 Saturday */
#include <stdio.h>
int main()
{
    char a[10];
    char ch = 0;
    int i = 0;
    int cword = 0,cdigi = 0,cspace = 0,cother = 0;

    printf("Input  char: ");

    for (i = 0; i < 10; i++)
    {
        scanf("%c^\n",&a[i]);
    }

    printf("------------------\n");

    for (i = 0; i < 10; i++)
    {
        ch = a[i];
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            cword++;
        }
        else if ( ch >= '0' && ch <= '9' )
        {
            cdigi++;
        }
        else if ( ch == ' ' )
        {
            cspace++;
        }
        else
        {
            cother++;
        }
    }

    printf("cword = %d,cdigi = %d,cspace = %d,cother = %d \n",cword,cdigi,cspace,cother);

    return 0;
}
