#include <stdio.h>

<<<<<<< HEAD

=======
>>>>>>> 990482393fc74c11b5acbe6d55f876c1572576ab
int main()
{
    int sum = 0,i = 0;
    char input[5];

    while(1)
    {
        scanf("%s",input);

        for(i = 0;input[i] != '\0';i++)
        {
            sum = sum * 10 + input[i] - '0';
        }
        printf("input=%d\n",sum);
    }

    return 0;
}
