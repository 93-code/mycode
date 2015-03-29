/* 20:10 2015-03-25 Wednesday */
#include <stdio.h>

int count_1(int n);
int main()
{
    int data = 0;
    int count = 0;

    printf("Input an num:");
    scanf("%d",&data);
    count = count_1(data);

    printf("count 1 = %d\n",count);

    return 0;
}

int count_1(int n)
{
    int count = 0;
    int i = 0,tmp = 0;

    for ( i = 0; i < 32; i++)
    {
        tmp = n >> i;
        if ( tmp & 1 == 1 )
        {
            count++;
        }
    }
    return count;
}
