#include <stdio.h>
#include <stdbool.h>//bool 

int main()
{
    printf("sizeof(bool) = %d\n",sizeof(bool));

    printf("sizeof(char) = %d\n",sizeof(char));
    printf("sizeof(unsigned char) = %d\n",sizeof(unsigned char));

    printf("---------------------------------------\n");

    printf("sizeof(short) = %d\n",sizeof(short));
    printf("sizeof(unsigned short) = %d\n",sizeof(unsigned short));

    printf("---------------------------------------\n");

    printf("sizeof(int) = %d\n",sizeof(int));
    printf("sizeof(unsigned int) = %d\n",sizeof(unsigned int));

    printf("---------------------------------------\n");

    printf("sizeof(long) = %d\n",sizeof(long));
    printf("sizeof(unsigned long) = %d\n",sizeof(unsigned long));

    printf("---------------------------------------\n");

    printf("sizeof(long long) = %d\n",sizeof(long long));
    printf("sizeof(unsigned long long) = %d\n",sizeof(unsigned long long));

    printf("========================================\n");
    printf("sizeof(float) = %d\n",sizeof(float));
    printf("sizeof(double) = %d\n",sizeof(double));
    return 0;
}
