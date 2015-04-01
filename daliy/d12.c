/* 20:03 2015-03-19 Thursday */
#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,z;
    int n,i;

    /*n = x*100 + y*10 + z;*/

    for (x = 1; x <= 9; x++)
    {
        for (y = 0; y <= 9; y++)
        {
            for (z = 0; z <= 9; z++)
            {
                n = x*100 + y*10 + z;

                if (n == pow(x,3)+pow(y,3)+pow(z,3))
                {
                
                    printf("n = %d - %d - %d\n",x,y,z);
                }
            }
        }
    }

    return 0;
}
