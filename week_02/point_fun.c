/* 16:31 2015-03-24 Tuesday */
#include <stdio.h>

double fun_add(double * p,int n);
int main()
{
    double a[5] = {1.1,2.2,3.3,4.4,5.5},r = 0;
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        r += a[i];
    }
    printf("r = %lf\n",r);

    printf("r2 = %lf\n",fun_add(a,5));
    
    return 0;
}

double fun_add(double * p,int n)
{
    int i = 0;
    double r = 0;
    
    *(p+4)=0.0;
    for ( i = 0; i < n; i++ )
    {
        /*r += *p++;*/
        r += p[i];
    }
    return r;
}
