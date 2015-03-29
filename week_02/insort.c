/* 16:54 2015-03-22 Sunday */
#include <stdio.h>
int main()
{
    int a[11]={1,4,5,9,11,14,18,21,23,31};
    int a = 0;
    int i = 0,j = 0,tmp = 0;
    
    printf("Input a num : ");
    scanf("%d",&a);
    
    for (i = 10; i > 0; i--)
    {
        if (  a < a[i] && a > a[i-1])
        {
           for ( j = 0; j <= 10-i; j++) 
           {
              tmp = a[i+1]; 
              a[i+1] = a[i];
              a[i] = a;
           }
        }
    }
    return 0;
}
