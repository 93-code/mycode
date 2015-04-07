/* 14:35 2015-04-03 Friday */

#include <stdio.h>
#include <stdlib.h>

#define MAX 20

typedef int DATATYPE;
typedef struct
{
    DATATYPE data[MAX]; 
    int n;
}SeqList;

SeqList * Create_SeqList();
int Insert_SeqList(SeqList *L,DATATYPE data);
int Printf_SeqList(SeqList *L);
SeqList * Create_SeqList()
{
    SeqList * L;
    L = (SeqList *)malloc(sizeof(SeqList));
    if (L == NULL)
        printf("Full Memery");
    L->n = 0;
    return L;
}

int IsEmpty_SeqList(SeqList *L)
{
    if (L->n != 0)
        return 0;

    printf("Is Empty SeqList\n");
    return 1;
}

int Insert_SeqList(SeqList *L,DATATYPE data)
{
    if (IsFull_SeqList(L))    
    {
        return -1;
    }

    L->data[L->n] = data;
    L->n++;
    return 0;
}
int Printf_SeqList(SeqList *L)
{
    if(IsEmpty_SeqList(L))
    {
        return -1;
    }
    int i;

    for (i = 0; i < L->n; i++)
    {
        printf("%d  ",L->data[i]);
    }
    printf("\n");
    return 0;
}
