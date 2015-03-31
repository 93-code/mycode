/* 09:25 2015-03-31 Tuesday */
#include <stdio.h>

int fun_sum(void);
int main()
{
    int ret = 0;
    ret = fun_sum();

    printf("1+2+3+...+100 = %d\n",ret);
    return 0;
}

int fun_sum(void)
{
    int r = 0;
    int i = 0;
    
    printf("%s-%d-%s\n",__FILE__,__LINE__,__FUNCTION__);
    for (i = 0; i <= 100; i++)
    {
        r = r+i;
    }
    return r;
}
