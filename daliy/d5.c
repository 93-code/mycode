#include <stdio.h>

int main()
{
    static int a[4]={0};
    int i;
    int j;
    int t;
    printf("Input num:\n");
   for (i = 0; i < 5; i++) 
   {
        scanf("%d",&a[i]); 
   }
   putchar('\n');
/*printf("a[4] = %d\n",a[4]);   */
   for (i = 0; i < 5; i++)
   {
       printf("%d ",a[i]);
   }

   putchar('\n');
   printf("Sequencing...");

   putchar('\n');
   for(i = 0; i < 4;i++)
   {
       for(j = i + 1; j < 5;j++)
       {
           if (a[i] > a[j])
           {
               t = a[i];
               a[i] = a[j];
               a[j] = t;
           }
       }
   }

   for (i = 0; i < 5; i++)
       printf("a[%d] = %d ",i,a[i]);

   putchar('\n');
    return 0;
}
