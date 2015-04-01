/* 08:52 2015-03-20 Friday */
#include <stdio.h>
int main()
{
    int i,n,flag;
   int p=0,p1=0; 
    printf("是否加密 y / n : ");/*{{{*/
    if ('y' == getchar())
    {
    
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    if (flag)
    {
        printf("setting passwd:\n");
        scanf("%d",&p);
    }/*}}}*/

    printf("-----------------------------\n");

    printf("Input a num /1/2/3:\n");
    scanf("%d",&n);
    
    switch (n)
    {
        case 1:
            if (flag)
            {
                for (i = 0;i < 3;i++)
                {
                    puts("Input your passwd:");
                    scanf("%d",&p1);
                    if ( p == p1 )
                    {
                    
                        printf("Welcome message\n");
                       return 1; 
                    }
                }
                printf("passwd error,exit...");
            }
            else
            {
                        printf("Welcome message\n");
            }
            break;
        case 2:
            printf("Welcome to game\n");
            break;
        case 3:
            printf("Welcome to phone\n");
            break;
        default:
            printf("others\n");
    }

    return 0;
}
