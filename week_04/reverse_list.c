/* 09:08 2015-04-07 Tuesday */
#include <stdio.h>
#include <stdlib.h>

typedef int DATATYPE;
typedef struct node
{
    DATATYPE data;
    struct node *next;
}LinkList;

LinkList * Create_LinkList()
{
    LinkList *head;

    head = (LinkList *)malloc(sizeof(LinkList));
    if (NULL == head)
    {
        printf("No free memory!\n");
        return NULL;
    }
    head->next = NULL;
    return head;
}

int Insert_Head_LinkList(LinkList *head,DATATYPE data)
{
    LinkList *L;
    LinkList *p;

    p = head->next;
    L = (LinkList *)malloc(sizeof(LinkList));
    L->data = data;

    L->next = p;
    head->next = L;

    return 0;
}

int Print_LinkList(LinkList *head)
{
    LinkList *L;

    L = head->next;

    while (L)
    {
        printf("%d ",L->data);
        L = L->next;
    }
    return 0;
}

int Reverse_LinkList(LinkList *head)
{
    LinkList *p;
    LinkList *t;

    p = head->next;
    head->next = NULL;
    
    while (p)
    {
        t = p->next;
        p->next = head->next;
        head->next = p;
        p = t;
    }
    return 0;
    
}
int main()
{
    int i;
    LinkList *L;
    L = Create_LinkList();

    for (i = 1; i <= 10; i++)
    {
        Insert_Head_LinkList(L,i);
    }

    Print_LinkList(L);
    printf("\n");

    Reverse_LinkList(L);
    Print_LinkList(L);
    printf("\n");
    return 0;
}
