/* 09:11 2015-04-02 Thursday */
#include <stdio.h>
#define N 20

int input_expression(char *s,int len);
char scan_opreator(char *ps,int *a,int *b);
int calc_data(char ch,int a,int b);


int main()
{
    char s[N];
    char *ps = s;
    int a = 0,b = 0;
    int sum = 0;
    char ch = 0; 
    int ret = 0;

    ret = input_expression(s,N);
    if (-1 == ret)
    {
        return -1;
    }

    ch = scan_opreator(ps,&a,&b);
    sum = calc_data(ch,a,b);

    printf("%s = %d\n",s,sum);

    return 0;
}

//在输入时判断非法字符
int input_expression(char *s,int len)
{
    int i = 0;

    printf("Input expression,don't use space:");

    while(1)
    {
        s[i] = getchar();
        if (s[i] == '\n')
        {
            break;
        }
        if(!(s[i] >= '0' && s[i] <= '9'))
        {
            switch(s[i])
            {
            case '+':
            case '-':
            case '*':
            case '/':
                goto next;
            default:
                goto error;
            }
        }
next:
        i++;
        if(i > len-1)
        {
            break;
        }
    }
    s[i] = '\0';
error:
    printf("Invaild char %c\n",s[i]);
    return -1;
}

char scan_opreator(char *ps,int *a,int *b)
{
    char ch = 0;
    if (*ps != '\0')
    {
        while (*ps >= '0' && *ps <= '9')
        {
            (*a) =(*a)*10 + *ps-'0';

            ps++;
        }
        while (*ps == ' ')
        {
            ps++;
        }
        ch = *ps;
        ps++;
        while (*ps == ' ')
        {
            ps++;
        }
        while (*ps != '\0')
        {
            (*b) = (*b)*10 + *ps-'0';
            ps++;
        }
    }
    return ch; 
}

int calc_data(char ch,int a,int b)
{
    int sum = 0;
    switch(ch)
    {
    case '+':
        sum = a + b;
        break;
    case '-':
        sum = a - b;
        break;
    case '*':
        sum = a * b;
        break;
    case '/':
        sum = a / b;
        break;
    default:
        printf("Error.\n");
    }
    return sum;
}

