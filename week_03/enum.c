/* 09:28 2015-04-01 Wednesday */
#include <stdio.h>
enum COLOR
{
    red,
    green,
    yellow,
    blue,
    black
};
int main()
{
    int n = 0;
    printf("Input an num:");
    scanf("%d",&n);

    switch(n)
    {
    case red:
        printf("red\n");
        break;
    case green:
        printf("green\n");
        break;
    case yellow:
        printf("yellow\n");
        break;
    case blue:
        printf("blue\n");
        break;
    case black:
        printf("black\n");
        break;
    }
    return 0;
}
