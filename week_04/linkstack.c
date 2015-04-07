/* 15:28 2015-04-07 Tuesday */
#include <stdio.h>
#include <stdlib.h>

#define MAX 10
typedef int DATATYPE;
typedef struct node
{
    DATATYPE data;
    struct node *next;
}LinkNode;

typedef struct
{
    LinkNode *top;
    int n;
}LinkStack;

LinkStack *Create_empty_Stack()
{
    LinkStack *s = (LinkStack *)malloc(sizeof(LinkStack));
    if (NULL == s)
    {
        printf("No free memory!\n");
        return NULL;
    }

    s->n = 0;
    s->top = NULL; 

    return s;
}

int Is_empty_Stack(LinkStack *s)
{
    return s->top == NULL ? 1 : 0;
}

DATATYPE Get_top_Data(LinkStack *s)
{
    if (Is_empty_Stack(s))
    {
        printf("LinkStack is empty!\n");
        return -1;
    }

    return s->top->data;
}

int Push_LinkStack(LinkStack *s,DATATYPE data)
{
    LinkNode *p = (LinkNode *)malloc(sizeof(LinkNode));
    if (NULL == p)
    {
        printf("No free memory!\n");
        return -1;
    }

    p->next = s->top;
    s->top = p;
    s->n++;

    p->data = data;
    
    return 0;
}

DATATYPE Pop_LinkStack(LinkStack *s)
{
    LinkNode *t;
    DATATYPE r;

    if (Is_empty_Stack(s))
    {
        printf("LinkStack is empty!\n");
        return -1;
    }
    t = s->top;
    r = t->data;
    s->top = t->next;
    free(t);
    s->n--;

    return r;
}

int main()
{
    int i = 1;
    LinkStack *s = Create_empty_Stack(); 

    for (i = 1; i <= MAX; i++)
    {
        Push_LinkStack(s,i);
    }

    if (!Is_empty_Stack(s))
    {
        printf("=============Get_top_Data=============\n");
        printf("%d \n",Get_top_Data(s));
    }

    printf("=============Pop_LinkStack============\n");
    while (s->top)
    {
       printf("%d ",Pop_LinkStack(s));
    }
    printf("\n");
    
    return 0;
}
