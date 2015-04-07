/* 10:31 2015-04-03 Friday */
#include <stdio.h>
#include <stdlib.h>

typedef int DATATYPE;
typedef struct node
{
    DATATYPE data;
    struct node *next;
}LinkNode;

LinkNode *Create_LinkList()
{
    LinkNode *head;

    head = (LinkNode *)malloc(sizeof(LinkNode));
    if(head == NULL)
    {
        printf("No free memory!\n");
        return NULL;
    }
    head->next = NULL; 
}

int Insert_Head_LinkList(LinkNode *head,DATATYPE data)
{
    LinkNode *p;

    p = (LinkNode *)malloc(sizeof(LinkNode));
    if (p == NULL)
    {
        printf("No free memory!\n");
        return -1;
    }

    p->next = head->next;
    p->data = data;

    head->next = p;

    return 0;
}

int Insert_Tail_LinkList(LinkNode *head,DATATYPE data)
{
    LinkNode *tail;
    LinkNode *p;
    p = (LinkNode *)malloc(sizeof(LinkNode));
    if (p == NULL)
    {
        printf("No free memory!\n");
        return -1;
    }
    
    p->next = NULL;
    p->data = data;

    tail = head;
    while (tail->next)
    {
        tail = tail->next;
    }
    tail->next = p;

}

int Insert_Sequential_LinkList(LinkNode *head,DATATYPE data)
{
    LinkNode *p = head->next;
    LinkNode *q = head;
    LinkNode *New;

#if 0/*{{{*/
    while (p->next)
    {
        q = p;
        p = q->next;
        if ((New->data >= q->data)&& (New->data <= p->data))
        {
            New->next =q->next;
            q->next = New;
        }
        
    }
#endif /*}}}*/

    while (p)
    {
        if (p->data > data)
            break;
        else
        {
            p = p->next;
            q = q->next;
        }

    }

    New = (LinkNode *)malloc(sizeof(LinkNode));
    if (New == NULL)
    {
        printf("No free memory!\n");
        return -1;
    }

    New->data = data; 
    New->next = q->next;
    q->next = New;

    return 0;
}

int Sort_LinkList(LinkNode *head)
{
    LinkNode *t = head->next;
    LinkNode *q = head;
    LinkNode *p = head->next;

    head->next = NULL;

    while (p)
    {
        if ()
    }
    
}
int Delete_Assgin_LinkList(LinkNode *head,DATATYPE data)
{
    LinkNode *p;
    LinkNode *q;
    
    p = head;
    while (p->next) 
    {
        q = p;
        p = q->next;
        if (data == p->data)
        {
            q->next = p->next;    
            free(p);
        }
    }
    return 0;
}


int Printf_LinkList(LinkNode *head)
{
    LinkNode *p;
    if (head->next == NULL)
    {
        printf("Empty List......\n");
        return -1;
    }

    p = head->next;

    while (p)
    {
        printf("%d  ",p->data);
       
        p = p->next;
        
    }
    return 0;
}

int TFree_LinkList(LinkNode *head)
{
    LinkNode *tmp;
    while(head != NULL)
    {
        tmp = head->next;
        free(head);
        head = tmp;
    }
    return 0;
}
int Free_LinkList(LinkNode *head)
{
    LinkNode *p = head;    

    while (p)
    {
        p = p->next;
        Free_LinkList(p);
    }
    free(p);
    return 0;
}


int 

int main()
{
    LinkNode *p;
    int i;
    DATATYPE data1[] = {1,2,3,4,99,5,6,7};
    DATATYPE data[] = {400,300,100,50};
    p = Create_LinkList();
    if (p == NULL)
    {
        printf("NULL...\n");
        return -1;
    }

    for (i = 0; i < sizeof(data)/sizeof(data[0]); i++)
    {
        Insert_Head_LinkList(p,data[i]);
    }

    printf("========Insert_Head_LinkList==========\n");
    Printf_LinkList(p);
    printf("\n\n");

    printf("========Insert_Tail_LinkList==========\n");
    Insert_Tail_LinkList(p,99);
    Printf_LinkList(p);
    printf("\n\n");

    printf("========Delete_Assgin_LinkList========\n");
    Delete_Assgin_LinkList(p,99);
    Printf_LinkList(p);
    printf("\n\n");

    printf("========Insert_Sequential_LinkList====\n");
    Insert_Sequential_LinkList(p,500);
    Printf_LinkList(p);
    printf("\n\n");

    return 0;
}
