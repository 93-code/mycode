/* 11:09 2015-03-24 Tuesday */
#include <stdio.h>
int main()
{
    char str[] = "strings";
    char *p = str;
    
    puts(str);
    puts(p);

    putchar(*p);
    return 0;
}
