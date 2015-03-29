/* 10:48 2015-03-24 Tuesday */
#include <stdio.h>

int main()
{
    int a[3][4];
    int i = 0,j = 0,k = 1;

    printf("%#x\n",a);
    printf("%#x\n",a[0]);
    printf("%#x\n",*a);
    printf("%#x\n",&a[0]);
    
/*{{{*/
#if 0
    for (i = 0; i< 3; i++ )
    {
        for ( j = 0; j < 4; j++ )
        {
            a[i][j] = k++;
        }
    }

    int *p = (int *)a;
    /*int (*pa)[4] = a;*/

    for ( i = 0; i < sizeof(a) / sizeof(a[0][0]); i++) 
    {
        printf("%-4d",p[i]);
    }
    puts("");

    int (*pa)[4] = a;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%-4d",*(*(pa + i)+j));
        }
        puts("");
    }

    //--------------------------------
    int *parr[3] = {a[0],a[1],a[2]};

    for ( i = 0; i < 3; i++ )
    {
        for ( j = 0; j < 4; j++ )
        {
            printf("%-4d",*(parr[i]+j));
        }
        puts("");
    }

    //-------------------------------
    int **pp = &p;
    pp = parr;

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%-4d",*(*(pp+i)+j));
        }
        puts("");
    }



    printf("sizeof(int (*)[4]) = %d\n",sizeof(int (*)[4]));
#endif/*}}}*/
    return 0;
}
