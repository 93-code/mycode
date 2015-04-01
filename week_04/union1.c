/* 09:21 2015-04-01 Wednesday */
#include <stdio.h>

enum stu
{
    int a=0x12345678;
    short b;
    char c;
}s;
int main()
{
    printf("%#x\n",s.a);
    printf("%#x\n",s.b);
    printf("%#x\n",s.c);
    return 0;
}
