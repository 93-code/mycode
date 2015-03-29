/* 15:24 2015-03-21 Saturday */
#include <stdio.h>

int lcm(int a,int b);
int gcd(int a,int b);

int main()
{
    int a = 0,b = 0;
    int rlcm = 0,rgcd = 0;

    printf("Input two num: ");
    scanf("%d%d",&a,&b);
    
    rlcm = lcm(a,b);
    rgcd = gcd(a,b);
    
    printf("最大公约数gcd = %d,最小共倍数lcm = %d\n",rgcd,rlcm);

    return 0;
}

int gcd(int a,int b)
{
    int tmp = 0;
    if ( a < b )
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    while ( b != 0 )
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }

    return a; 
}
int lcm(int a,int b)
{
    return ( a*b / gcd(a,b));
}
