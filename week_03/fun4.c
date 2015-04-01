/* 15:17 2015-03-31 Tuesday */
<<<<<<< HEAD
/*µÝ¹é£¬·´ÏòÊä³ö*/
=======
>>>>>>> 990482393fc74c11b5acbe6d55f876c1572576ab
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
