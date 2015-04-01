/* 12:47 2015-03-25 Wednesday */
#include <stdio.h>
int main()
{
    const int *p = NULL;
    int * const q = NULL;
    int const a = 10;

    p = &a;
    /*q = &a;//Error,----const q;*/

    printf("%p----%d\n",&a,a);
    printf("%p----%d\n",p,*p);
    
    puts("----------------------------------");

    /*p = NULL;*/
    /*a = 12;*/
    /**p = 15;//Error,can't change the volume by *p,cause const int *P;*/
    printf("%p----%d-----%d\n",p,a,*p);


    puts("----------------------------------");

    p = NULL;
    printf("%p------%d\n",q,*q);
    return 0;

}
