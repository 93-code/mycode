#ifndef _HEAD_H_ 
#define _HEAD_H_ 

typedef int DATATYPE;

//链表节点的类型
typedef struct node 
{
	DATATYPE data;
	struct node *next;
}LinkNode;

//栈头的类型
typedef struct 
{
	LinkNode *top;//记录栈顶元素的位置
	int n;//栈中元素的个数
}LinkStack;

extern LinkStack *create_empty_linkstack();
extern int  is_empty_linkstack(LinkStack *s);
extern DATATYPE get_top_linkstack(LinkStack *s);
extern int push_linkstack(LinkStack *s,DATATYPE data);
extern DATATYPE pop_linkstack(LinkStack *s);

///////////////////////////////////////////////////////////////////
typedef struct 
{
	LinkNode *front;
	LinkNode *rear;
}LinkQueue;

extern LinkQueue *create_linkqueue();
extern int is_empty_linkqueue(LinkQueue *q);
extern int enter_linkqueue(LinkQueue *q,DATATYPE data);
extern DATATYPE delete_linkqueue(LinkQueue *q);
#endif 
