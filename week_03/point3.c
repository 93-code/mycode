/* 15:52 2015-03-30 Monday */
#include <stdio.h>
int main()
{
    char buf[6] = {"hello"};
    char reverse_buf[6] = {0};

#if 0/*{{{*/
    char *p = buf;
    char *q = reverse_buf+4;
    
    while (q >= reverse_buf && p <= buf+44
    {
        *q = *p;
        p++;
        q--;    
    }
    reverse_buf[5] = '\0';
#endif/*}}}*/
    char *p = buf;
    int i = 0;

    while (*p != '\0')
    {
        p++;
    }
    p--;

    for (i = 0; i < 6; i++)
    {
        reverse_buf[i] = *p;
        p--;
    }
    reverse_buf[i]='\0';
    puts(reverse_buf);
    return 0;
}
