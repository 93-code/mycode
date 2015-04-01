#include <stdio.h>
int main()
{
    int n = 0;
    
    printf("Input score: ");
    scanf("%d",&n);

    if ( n > 100 || n < 0)
    {
        printf("Error score\n");
        return -1;
    }

    if ( n <= 100 )
    {
        if ( n < 90 )
        {
            if ( n < 80 )
            {
                if ( n < 70 )
                {
                    if ( n < 60 )
                    {
                        puts("E");
                        return 1;
                    }
                    puts("D");
                    return 1;
                }
                puts("C");
                return 1;
            }
            puts("B");
            return 1;
        }
        puts("A");
    }

    return 0;
}
