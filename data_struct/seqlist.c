/* 15:48 2015-04-02 Thursday */ 
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef int DATATYPE;
typedef struct
{
    DATATYPE data[MAX];
    int n;
}SeqList;

SeqList *create_seqlist()
{
    SeqList *L;

    L = (SeqList *)malloc(sizeof(SeqList));
    L->n = 0;

    return L;
}

int insert_seqlist(SeqList *L,int data)
{
    if (L->n == MAX)
    {
        printf("full\n");
        return -1;
    }

    L->data[L->n] = data;
    L->n++;

    return 0;
}

int print_seqlist(SeqList *L)
{
    int i = 0;
    for (i = 0; i < L->n; i++)
    {
        printf("%d : %d\n",i,L->data[i]);
    }
    return 0;
}

int appoint_insert(SeqList *L,int n,int data)
{
    int i = 0;
    if (!(n >=0 && n <= MAX))
    {
        printf("Invail");
        return-1;
    }
    if (L->n == MAX)
    {
        printf("full\n");
        return -1;
    }

    for (i = L->n-1; i >= n-1; i--)
    {
        L->data[i+1] = L->data[i];
    }
    L->data[n-1] = data;
    L->n++;
    return 0;
}

int del_assign_seqlist(SeqList *L,int n)
{
    if (L->n == 0)
    {
        printf("Null\n");
        return -1;
    }
    //DATATYPE data[] = {1,5,3,4,3,2,1,1};
    int i,j;
    for (i = 0,j = 0; i < L->n; i++)
    {
        if(L->data[i] != n)
        {
#if 0
            for(j = i; j <= L->n; j++)
            {
                L->data[j-1] = L->data[j];
            }
#endif
            L->data[j++] = L->data[i];
        }    
        else
        {
            L->n = L->n - 1;
        }
    
    } 
    L->n--;
    return 0;
}



int main()
{
    SeqList *L; 
    int i = 0;
    DATATYPE data[] = {1,5,3,4,3,2,1,1};
    int num = 0;

    L = create_seqlist();
    if (L == NULL)
    {
        return -1;
    }

    for (i = 0; i < sizeof(data)/sizeof(data[0]); i++) 
    {
        insert_seqlist(L,data[i]);
    }

    printf("print_seqlist:\n");

    print_seqlist(L);
#if 0
    printf("Appoint Insert:\n");
    appoint_insert(L,3,99);
    print_seqlist(L);
#endif
    printf("det_seqlist:\n");
    del_assign_seqlist(L,1);
    print_seqlist(L);

    return 0;
}
