/* 09:55 2015-03-23 Monday */
#include <stdio.h>
#define N 20
int main()
{
    char buf[N] = "";
    char ch = 0;
    int n = 0,i = 0,j = 0;

    printf("Input string...\n");
    scanf("%20[^\n]",buf);

    i = 0;
    n = 0;
    while ( buf[i] != '\0')
    {
        n++;
        i++;
    }
    for ( i = n -1; i >= 0; i--)
    {
        printf("%c",buf[i]);
    }
    puts("");
    puts("-------------");

    for ( i = 0,j = n -1; i < j; i++,j--)
    {
        ch = buf[i];
        buf[i] = buf[j];
        buf[j] = ch;
    }
    puts(buf);

    return 0;

}
