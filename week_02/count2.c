/* 16:22 2015-03-21 Saturday */
#include <stdio.h>
#define N 0
int main()
{
    char ch = 0;
    int cletter = 0,cspace = 0,cdigit = 0,cother = 0;

    printf("Input some char: ");

    while ( (ch = getchar()) != '\n')
    {
        if ( ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' )
        {
            cletter++;
        }
        else if ( ch == ' ')
        {
            cspace++;
        }
        else if ( ch >= '0' && ch <= '9' )
        {
            cdigit++;
        }
        else
        {
            cother++;
        }
    }

    printf(" cletter = %d,cspace = %d,cdigit = %d,cother = %d \n"
        ,cletter,cspace,cdigit,cother);

    return 0;
}
