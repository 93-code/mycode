/* 14:28 2015-04-07 Tuesday */
#include <stdio.h>
#include <stdlib.h>

#define MAX 20

typedef int DATATYPE;
typedef struct
{
    DATATYPE data[MAX];
    int top;
}SeqStack;

SeqStack *Create_empty_Stack()
{
    SeqStack *s = (SeqStack *)malloc(sizeof(SeqStack));
    if (NULL == s)
    {
        printf("No free memory!\n");
        return NULL;
    }
    s->top = 0;

    return s;
}

int Is_full_Stack(SeqStack *s)
{
    return s->top == MAX ? 1 : 0;
}

int Is_empty_Stack(SeqStack *s)
{
    return s->top == 0 ? 1 : 0;
}

int Push_Stack(SeqStack *s,DATATYPE data)
{
   if (Is_full_Stack(s))
   {
        printf("Stack is full!\n");
        return -1;
   }

   s->data[s->top] = data;
   s->top++;

   return 0;
}

DATATYPE Pop_Stack(SeqStack *s)
{
    if (Is_empty_Stack(s))
    {
        printf("Stack is empty!\n");
        return -1;
    }
    return s->data[--(s->top)];
}

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
