#include <stdio.h>
int main()
{
    int a,b,c;
    int ret;
    printf("Input three int: ");
    /*ret = scanf("%4d%2d%2d",&a,&b,&c);*/
    ret = scanf("%d%d%d",&a,&b,&c);

    printf("ret = %d a = %d b = %d c = %d\n",ret,a,b,c);
    return 0;
}
