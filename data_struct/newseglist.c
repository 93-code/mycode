/* 19:28 2015-04-02 Thursday */
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
int Insert_SeqList(SeqList *L,int data);
int Printf_SeqList(SeqList *L);
int Delete_SeqList(SeqList *L,int data);
int Modifi_SeqList(SeqList *L,int n,int data);
int IsEmpty_SeqList(SeqList *L);
int IsFull_SeqList(SeqList *L);
int Sort_SeqList(SeqList *L);
int Delete_Repeat_SeqList(SeqList *L);

int main()
{
    SeqList *L;
    SeqList *L1;

    int i;
    DATATYPE s[]={1,45,3,2,5,1,9};
    DATATYPE s1[]={1,2,3,1,1,14,2,15,2,3,4};

    L = Create_SeqList();
    L1 = Create_SeqList();

    printf("Insert_SeqList L......\n");
    for (i = 0; i < sizeof(s)/sizeof(s[0]); i++)
    {
        Insert_SeqList(L,s[i]);
    }

    printf("Printf_SeqList L.......\n");
    Printf_SeqList(L);

    printf("Delete_SeqList.......\n");
    Delete_SeqList(L,1);
    printf("Printf_SeqList.......\n");
    Printf_SeqList(L);

    printf("Modifi_SeqList.......\n");
    Modifi_SeqList(L,3,99);
    printf("Printf_SeqList.......\n");
    Printf_SeqList(L);

    printf("Sort_SeqList.......\n");
    Sort_SeqList(L);
    printf("Printf_SeqList.......\n");
    Printf_SeqList(L);

    printf("\n\n\n");
    printf("-------------------------------\n");
    printf("Insert_SeqList L1......\n");
    for (i = 0; i < sizeof(s1)/sizeof(s1[0]); i++)
    {
        Insert_SeqList(L1,s1[i]);
    }
    printf("================\n");
    printf("Delete_SeqList.......\n");
    Delete_SeqList(L1,1);
    printf("Printf_SeqList.......\n");
    Printf_SeqList(L1);
    printf("================\n");

    printf("Printf_SeqList L1.......\n");
    Printf_SeqList(L1);
    printf("Delete_Repeat_SeqList.....\n");
    Delete_Repeat_SeqList(L1);
    printf("Printf_SeqList.......\n");
    Printf_SeqList(L1);


    return 0;
}

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

int IsFull_SeqList(SeqList *L)
{
    if (L->n <= MAX)
        return 0;
    printf("Is Full SeqList\n");
    return 1;
}

int Insert_SeqList(SeqList *L,int data)
{
    if (IsFull_SeqList(L))    
    {
        return -1;
    }

    L->data[L->n] = data;
    L->n++;
    return 0;
}

int Insert_Assign_SeqList(SeqList *L,int n,int data)
{
    if (IsFull_SeqList(L))
    {
        return -1;
    }
    int i = 0;

    for (i = L->n -1; i > n-1; i--)
    {
        L->data[i+1] = L->data[i];
    }
    L->data[n-1] = data;
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

int Delete_SeqList(SeqList *L,int data)
{
    if (IsEmpty_SeqList(L))
    {
        return -1;
    }

    int i,j;

    for (i = 0,j = 0; i < L->n; i++)
    {
        if (L->data[i] != data)
        {
            L->data[j++] = L->data[j];
        } 
        else
        {
            L->n--;
        }
    }
    return 0;
}


int Modifi_SeqList(SeqList *L,int n,int data)
{
    if (!(n >= 0 && n <= L->n))
    {
        printf("Invalid n:%d...[0-%d]\n",n,L->n);
        return -1;
    }
    L->data[n-1] = data;
    return 0;
}

int Sort_SeqList(SeqList *L)
{
    if (IsEmpty_SeqList(L))
    {
        return -1;
    }
    int i,j;

    for (i = 0; i < L->n; i++)
    {
        for (j = i+1; j < (L->n); j++)
            if (L->data[i] > L->data[j])
            {
                L->data[i] ^= L->data[j];
                L->data[j] ^= L->data[i];
                L->data[i] ^= L->data[j];
            }
    }
    return 0;
}

int Delete_Repeat_SeqList(SeqList *L)
{
    if (IsEmpty_SeqList(L))
    {
        return -1;
    }

    DATATYPE tmp = 0;
    int i;
    int j;
    for (i = 0,j = 0; i < L->n-j; i++,j++)
    {
        tmp = L->data[i];
        Delete_SeqList(L,tmp);
        Insert_Assign_SeqList(L,i,tmp);
#if 0 
        printf("Printf_SeqList %d.......\n",i);
        Printf_SeqList(L);
        Insert_SeqList(L,tmp);
        printf("Printf_SeqList %d.......\n",i);
        Printf_SeqList(L);
#endif
    }
    return 0;
}
