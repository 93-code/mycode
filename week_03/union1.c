/* 09:21 2015-04-01 Wednesday */
#include <stdio.h>

union stu
{
    int a;
    short b;
    char c;
}s;
int main()
{
    s.a = 0x12345678;
    printf("a :%#x\n",s.a);
    printf("b :%#x\n",s.b);
    printf("c :%#x\n",s.c);
    return 0;
} 
