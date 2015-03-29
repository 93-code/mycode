#include <stdio.h> 
int main()
{
    char ch = 0;

    printf("Input word: ");
    scanf("%c",&ch);

    if ( ch <= 'z' && ch >= 'a')
    {
    
        ch = ch - ' ';
        putchar(ch);
        /*printf("\n");*/
        puts("\n");

    }
    else if ( ch <= 'Z' && ch >= 'A')
    {

        ch = ch + ' ';
        putchar(ch);
        printf("\n");
    }
    else if ( ch >= '0' && ch <= '9')
    {
        putchar(ch);
        printf("\n");

    }
    else
    {
        puts("Error data");
    }
    
    
    return 0;
}
