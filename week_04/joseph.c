/* 10:15 2015-04-07 Tuesday */
#include <stdio.h>
#include <stdlib.h>


typedef int DATATYPE;
typedef struct node
{
    DATATYPE data;
    struct node *next;
}LinkList;

LinkList * Create_Joseph_loop(int n)
{
    int i;
    LinkList *p;
    LinkList *t;
    LinkList *head;

    head = (LinkList *)malloc(sizeof(LinkList));
    head->data = 1;

    for (t = head,i = 2; i <= n; i++)
    {
        p = (LinkList *)malloc(sizeof(LinkList));
        p->data = i;
        t->next = p;
        t = p;
    }

    t->next = head;
    /*printf("Create_Joseph_loop......\n");*/

    return head;
}

int Print_Joseph_Num(LinkList *head)
{
    LinkList *p;
    p = head;

    while (p->next != head)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("%d ",p->data);

    return 0;
}

int Joseph_Answer_1(LinkList *head,int k,int m)
{
    int i;
    LinkList *t,*p;

    p = head;
        for (i = 1; i < k; i++)
        {
            p = p->next;
        }

    while (p->next != p)
    {
        for (i = 0; i < m-2; i++)
        {
            p = p->next;
        }

        t = p->next;
        p->next = t->next;
        printf("%d ",t->data);
        free(t);

        p = p->next;
    } 
    printf("%d ",p->data);
    free(p);
}
int Joseph_Answer_2(LinkList *head,int k,int m)
{
    int i;
    LinkList *t,*p;

    p = head;
        for (i = 1; i < k; i++)
        {
            p = p->next;
        }

    while (p->next != p)
    {
        for (i = 0; i < m-1; i++)
        {
            p = p->next;
        }

        printf("%d ",p->data);
        t = p->next;
        p->data = t->data;
        p->next = t->next;
        free(t);
    } 
    printf("%d ",p->data);
    free(p);
}
int main()
{ 
    LinkList *L; 
    L = Create_Joseph_loop(8);
    Print_Joseph_Num(L); 
    printf("\n");

    //Joseph_Answer_1(L,3,4);
    Joseph_Answer_2(L,3,1);
    printf("\n");

    
    return 0; 
}
