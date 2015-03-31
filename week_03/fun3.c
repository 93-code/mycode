/* 10:21 2015-03-31 Tuesday */
#include <stdio.h>

int find_max_min(int *array,int * max,int * min,int n);

int main()
{
    int array[] = {10,23,45,78,90,4,6};
    int max = array[0];
    int min = array[0];
    int len = 0;

    len = sizeof(array)/sizeof(array[0]);
    find_max_min(array,&max,&min,len);

    printf("max = %d -- min = %d\n",max,min);
    return 0;
}

int find_max_min(int *array,int *max,int *min,int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (*max < array[i])
        {
            *max = array[i];
        }
        if (*min > array[i])
        {
            *min = array[i];
        }
    }
    return 0;
}
