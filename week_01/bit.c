#include <stdio.h>
int main()
{
    unsigned int reg;

    printf("reg = %#x\n",reg);

    reg = reg | (1 << 13);
    printf("reg = %#x\n",reg);

    reg = reg & (~(1 << 14));

    printf("reg = %#x\n",reg);
//��11-14λ�û���0101:�Ƚ�4λ��0����λ��
    reg = reg & ~(0xf << 11);
    reg = reg | (5 << 11);
    /*reg = reg | (5 << 13);*/

    printf("reg = %#x\n",reg);
 
    return 0;
}
