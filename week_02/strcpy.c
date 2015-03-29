/* 13:11 2015-03-25 Wednesday */
#include <stdio.h>

char * mstrcpy(char * strDist,const char * strSrc);
int main()
{
    char a[50];
    char * strDist = a;
    char * strSrc = NULL;

    strSrc = "ssssssssssssss";

    mstrcpy(strDist,strSrc); 

    puts(strDist);
    return 0;
}

char * mstrcpy(char * strDist,const char * strSrc)
{
    char * p = strDist;

    while (*strDist++ = *strSrc++)
        /*if (*strSrc == '\0')*/
            /*break;*/
        ;


    return p;
}
