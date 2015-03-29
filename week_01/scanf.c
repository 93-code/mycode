#include <stdio.h>

int main()
{
    int a = 0,b = 0;

    printf("Input int: ");
    /*scanf("%4d",&a);*/
    /*scanf("%d%d",&a,&b);*/
    scanf("%*d%d",&a);//*

    printf(" a = %d b = %d\n",a,b);

    return 0;

}
