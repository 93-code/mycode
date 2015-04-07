/* 11:51 2015-04-04 Saturday */
#include <stdio.h>
#include <stdlib.h>


typedef int DATATYPE;
typedef struct node
{
    DATATYPE data;
    struct node *next; 
}LinkNode;

int Check_LinkNode_legal(LinkNode *L)
{
    if (L == NULL)
    {
        printf("NO free memory or Illegal!\n");
        return 0;
    }
    return 1;
}
LinkNode * Create_LinkList()
{
    LinkNode *Head;
    Head = (LinkNode *)malloc(sizeof(LinkNode));

    if (!Check_LinkNode_legal(Head)) 
        return NULL;

    Head->next = NULL;

    return Head;
}

//Insert_Head_LinkList will reverse output
int Insert_Head_LinkList(LinkNode *head,DATATYPE data)
{
    if (!Check_LinkNode_legal(head))
        return -1;

    LinkNode *L;
    L = (LinkNode *)malloc(sizeof(LinkNode));

    if (!Check_LinkNode_legal(L))
        return -1;

    L->data = data;
    //be carefully
    L->next = head->next;
    head->next = L;

    return 0;
}

int Insert_Tail_LinkList(LinkNode *head,DATATYPE data)
{
    if (!Check_LinkNode_legal(head))
        return -1;

    LinkNode *L;
    LinkNode *p;
    L = (LinkNode *)malloc(sizeof(LinkNode));
    if (!Check_LinkNode_legal(L))
        return -1;

    p = head;
    while (p->next)
    {
        p = p->next;
    }
    p->next = L;
    L->next = NULL;
    L->data = data;

    return 0;
}

//Insert a data in a order Linklist;
int Insert_Order_LinkList(LinkNode *head,DATATYPE data)
{
    if (!Check_LinkNode_legal(head))
        return -1;

    LinkNode *L;
    LinkNode *q = head;
    LinkNode *p = head->next;

    while(p)
    {
        if (p->data > data)
        {
            break;
        }
        else
        {
            q = q->next;
            p = p->next;
        }
    }

    L = (LinkNode *)malloc(sizeof(LinkNode));
    if (!Check_LinkNode_legal(L))
        return -1;

    L->next = q->next;
    q->next = L; 
    L->data = data;

    return 0;
}

int Sort_LinkList(LinkNode *head)
{
    if (!Check_LinkNode_legal(head))
        return -1;
    LinkNode *q,*p; //指向需要排序的部分，
    LinkNode *k;

    LinkNode *t = head->next;//t从未排序的部分出数
    head->next = NULL;

    while (t)
    {
        q = head;
        p = head->next;

        while (p)
        {
            if (p->data > t->data)
            {
                break;
            }
            else
            {
                q = q->next;
                p = p->next;
            }

        }

        k = t->next;
        t->next = q->next;
        q->next = t;
        t = k;
    }
    return 0;
}

int Delete_Assign_LinkList(LinkNode *head,DATATYPE data)
{
    if (!Check_LinkNode_legal(head))
        return -1;
    LinkNode *q;
    LinkNode *p; 

    q = head;
    p = head->next;

    while (p)
    {
        if (p->data == data)
        {
            q->next = p->next;  
            free(p);
            p = q->next;//Important: p always behind q;
        }
        else
        {
            q = q->next;
            p = p->next;
        }
    }
    return 0;
}

int Clean_LinkList(LinkNode *head)
{
    LinkNode *t;
    
    while (head)
    {
        t = head->next;
        free(head);
        head = t;
    }
    return 0;
}

int Find_Middle_LinkList(LinkNode *head)
{
    LinkNode *q = head->next;
    LinkNode *p = head->next;

    while (1)
    {
        p = p->next;
        if (NULL == p)
            break;
        p = p->next;
        if (NULL == p)
            break;

        q = q->next;
    }

    printf("Middle : %d\n",q->data);
    return 0;
}

int Reverse_LinkList(LinkNode *head)
{
    LinkNode *t,*k,*q,*p;


    q = head;
    p = head->next;
    t = p->next;
    p->next = NULL;

    while (t)
    {
        k = t->next;
        t->next = q->next;
        q->next = t;
        t = k;
    }
    return 0;
}

int Print_LinkList(LinkNode *head)
{
    if (!Check_LinkNode_legal(head))
        return -1;

    LinkNode *L = head->next;

    while (L != NULL)
    {
        printf("%d  ",L->data);    
        L=L->next; 
    }

    return 0;
}

int main()
{
    int i;
    LinkNode *L;
    DATATYPE s[]={1,4,3,2,100,6,93,1,1,1};

    L = Create_LinkList();
    if (!Check_LinkNode_legal(L))
        return -1;

    printf("==========Insert_Head_LinkList========\n");
    for (i = 0; i < sizeof(s)/sizeof(s[0]); i++) 
    {
        Insert_Head_LinkList(L,s[i]);
    }

    printf("===========Print_LinkList=============\n");
    Print_LinkList(L);
    printf("\n\n");

    printf("===========Delete_Assign_LinkList======\n");
    Delete_Assign_LinkList(L,1);
    Print_LinkList(L);
    printf("\n\n");

    printf("===========Sort_LinkList==============\n");
    Sort_LinkList(L);
    Print_LinkList(L);
    printf("\n\n");

    printf("===========Insert_Tail_LinkList=======\n");
    Insert_Tail_LinkList(L,99);
    Print_LinkList(L);
    printf("\n\n");

    printf("===========Insert_Order_LinkList======\n");
    Insert_Order_LinkList(L,3);
    Print_LinkList(L);
    printf("\n\n");

    printf("===========Sort_LinkList==============\n");
    Sort_LinkList(L);
    Print_LinkList(L);
    printf("\n\n");

    printf("===========Delete_Assign_LinkList======\n");
    Delete_Assign_LinkList(L,1);
    Print_LinkList(L);
    printf("\n\n");

    printf("===========Reverse_LinkList===========\n");
    Reverse_LinkList(L);
    Print_LinkList(L);
    printf("\n\n");


    return 0;
}
