#include <stdio.h>

int main()
{
    printf("%c:%d\n",'\101','\101');
    printf("%c:%d\n",'\x40','\x40');

    printf("%c:%d\n",'\0','\0');
    printf("%c:%d\n",' ','\040');

    return 0;
}
