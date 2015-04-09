#include <stdio.h>
#include <stdlib.h>
#include "head.h"

LinkQueue *create_linkqueue()
{
	LinkNode *head;
	LinkQueue *q;

	head = (LinkNode *)malloc(sizeof(LinkNode));
	head->next = NULL;

	q = (LinkQueue *)malloc(sizeof(LinkQueue));
	q->front = q->rear = head;

	return q;
}

int is_empty_linkqueue(LinkQueue *q)
{
	return q->front == q->rear ? 1 : 0;
}

int enter_linkqueue(LinkQueue *q,DATATYPE data)
{
	LinkNode *temp;

	temp = (LinkNode *)malloc(sizeof(LinkNode));
	temp->data = data;
	temp->next = NULL;

	//让链表链接
	q->rear->next = temp;
	//更新rear到新的尾部节点
	q->rear       = temp;

	return 0;
}

DATATYPE delete_linkqueue(LinkQueue *q)
{
	LinkNode *temp;

	if(is_empty_linkqueue(q))
	{
		printf("The LinkQueue is empty!\n");
		return -1;
	}

	temp = q->front;
	q->front = temp->next;
	free(temp);
	
	return q->front->data;
}
