#ifndef _HEAD_H_
#define _HEAD_H_

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

extern LinkStack *Create_empty_Stack();
extern Is_empty_Stack(LinkStack *s);
extern DATATYPE Get_top_Data(LinkStack *s);
extern int Push_LinkStack(LinkStack *s,DATATYPE data);
extern DATATYPE Pop_LinkStack(LinkStack *s);

#endif
