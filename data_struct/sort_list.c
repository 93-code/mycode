/* 14:25 2015-04-06 星期一 */
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

    head = (LinkList*)malloc(sizeof(LinkList));
    if (head == NULL)
    {
        printf("No free memory!\n");
        return NULL;
    }

    return head;
}

int Insert_Tail_LinkList(LinkList *head,DATATYPE data)
{
    LinkList *new;
    LinkList *p;

    p = head;
    while (p->next)
    {
        p = p->next;
    }

    new = (LinkList *)malloc(sizeof(LinkList));
    
    new->data = data;
    new->next = NULL;
    p->next = new;

    return 0;
}

int Sort_Insert_LinkList(LinkList *head)
{
    LinkList *t;
    LinkList *k;
    LinkList *q;
    LinkList *p;

    t = head->next->next;
    head->next->next = NULL;
    while (t)
    {
        q = head;
        p = head->next;

        while (p)
        if (p->data > t->data)    
        {
            break;
        }
        else
        {
            p = p->next;
            q = q->next;
        }
        k = t->next;
        t->next = q->next;
        q->next = t;
        t = k;
    }
    return 0;
}

int Print_LinkList(LinkList *head)
{
    LinkList *p;

    p = head->next;

    while (p)
    {
        printf("%d  ",p->data);
        p = p->next;
    }
    printf("\n");

    return 0;
}

int main()
{
    int i;
    LinkList *L;
    DATATYPE s[] = {1,2,3,21,12,32,5,9,33,19};

    L = Create_LinkList();
    if (L == NULL)
    {
        printf("Error!\n");
        return -1;
    }

    for (i = 0; i < sizeof(s)/sizeof(s[0]); i++)
    {
        Insert_Tail_LinkList(L,s[i]);
    }

    Print_LinkList(L);

    Sort_Insert_LinkList(L);
    Print_LinkList(L);
    return 0;
    
}

