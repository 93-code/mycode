/* 15:17 2015-03-31 Tuesday */
<<<<<<< HEAD
/*递归，反向输出*/
=======
<<<<<<< HEAD
/*递归，反向输出*/
=======
>>>>>>> 990482393fc74c11b5acbe6d55f876c1572576ab
>>>>>>> 0a2c252e7e55cbcd328f140e55b89f09787a500c
#include <stdio.h>
int fun4(char * p);
int main()
{
    char buf[]="hello";
    fun4(buf);
    return 0;
}

int fun4(char * p)
{
    while(*p == '\0')
        return 0;
    fun4(p+1);
    return putchar(*p);
}
