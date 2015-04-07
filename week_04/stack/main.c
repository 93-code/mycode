#include <stdio.h>
#include <stdlib.h>
#include "head.h"
int main()
{
    int i = 1;
    SeqStack *s = Create_empty_Stack();

    while (!Is_full_Stack(s))
    {
        Push_Stack(s,i++);
    }

    printf("=====================================\n");

    while (!Is_empty_Stack(s))
    {
       printf("%d ",Pop_Stack(s));
    }
    printf("\n");
    return 0;
}
