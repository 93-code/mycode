#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[]="ss ww ff";
    char *p = s;
    char *q = s;

    while(*q != '\0')
    {
        if (*q == ' ')
            q++;
        else
            *p++ = *q++;
    }
    *p = '\0';

    puts(s);
    return 0;
}
