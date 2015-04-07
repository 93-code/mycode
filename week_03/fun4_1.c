/* 20:01 2015-03-31 Tuesday */
#include <stdio.h>
int main()
{
   char buf[]="hello world";
   reverse_p1(buf);
    return 0;
}

int reverse_p(const char *p)
{
    while (*p == '\0')
    {
       return 0; 
    }
    reverse_p(p+1);
    return putchar(*p);
    
}
int reverse_p1(const char *p)
{
    while (*p != '\0')
    {
        reverse_p1(p+1);
        return putchar(*p);
    }
    return 0;
}
