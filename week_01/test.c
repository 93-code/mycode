#include <stdio.h>
int main()

{
    int a = 10,b =12;
    int c = 0;
        
    (a > b) || ++c;

    printf("c = %d\n",c);

    return 0;
}
