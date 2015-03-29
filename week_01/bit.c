#include <stdio.h>
int main()
{
    unsigned int reg;

    printf("reg = %#x\n",reg);

    reg = reg | (1 << 13);
    printf("reg = %#x\n",reg);

    reg = reg & (~(1 << 14));

    printf("reg = %#x\n",reg);
//将11-14位置换成0101:先将4位置0，在位或
    reg = reg & ~(0xf << 11);
    reg = reg | (5 << 11);
    /*reg = reg | (5 << 13);*/

    printf("reg = %#x\n",reg);
 
    return 0;
}
