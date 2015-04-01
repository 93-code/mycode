#include <stdio.h>
int main()
{
    /*char ch;*/
    int ch;

    printf("Input char:");
    
    ch = getchar();
    /*ch = ch + ' ';*/

    /*printf("ch = %c\n",ch);*/
    putchar(ch + ' ');
    putchar('\n');

    return 0;
}
