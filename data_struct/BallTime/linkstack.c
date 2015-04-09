#include <stdio.h>
#include <stdlib.h>
#include "head.h"

LinkStack *create_empty_linkstack()
{
	LinkStack *s;

	s = (LinkStack *)malloc(sizeof(LinkStack));
	s->top = NULL;
	s->n   = 0;

	return s;
}

int  is_empty_linkstack(LinkStack *s)
{
	return s->top == NULL ? 1 : 0;
}

DATATYPE get_top_linkstack(LinkStack *s)
{
	if(is_empty_linkstack(s))
	{
		printf("The LinkStack is empty!\n");
		return -1;
	}

	return s->top->data;
}

int push_linkstack(LinkStack *s,DATATYPE data)
{
	LinkNode *temp;

	temp = (LinkNode *)malloc(sizeof(LinkNode));
	temp->data = data;

	temp->next = s->top;
	s->top     = temp;
	s->n ++;

	return 0;
}

DATATYPE  pop_linkstack(LinkStack *s)
{
	DATATYPE data;
	LinkNode *temp;

	if(is_empty_linkstack(s))
	{
		printf("The LinkStack is empty!\n");
		return -1;
	}
	
	temp = s->top;
	s->top = temp->next;

	data = temp->data;
	free(temp);
	
	s->n --;

	return data;
}
