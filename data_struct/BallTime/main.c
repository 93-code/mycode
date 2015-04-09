#include <stdio.h>
#include <stdlib.h>
#include "head.h"

#define MN  4 
#define FN  11 
#define HN  11

int is_true_ballqueue(LinkQueue *q)
{
    int i = 1;
    LinkNode *p = q->front->next;

    for(i = 1;i <= 27;i ++)
    {
        if(p->data != i )
            return 0;

        p = p->next;
    }

    return 1;
}

int answer_balltime(LinkQueue *q,LinkStack *ms,LinkStack *fs,LinkStack *hs)
{
    int ball;
    int count = 0;

    while(1)
    {
        ball = delete_linkqueue(q);

        if(ms->n != MN)
        {
            push_linkstack(ms,ball);
            continue;
        }

        //清空分钟指示器
        while(!is_empty_linkstack(ms))
        {
            enter_linkqueue(q,pop_linkstack(ms));
        }

        if(fs->n != HN)
        {
            push_linkstack(fs,ball);
            continue;
        }

        //清空五分钟指示器
        while(!is_empty_linkstack(fs))
        {
            enter_linkqueue(q,pop_linkstack(fs));
        }

        if(hs->n != FN)
        {
            push_linkstack(hs,ball);
            continue;
        }

        //清空小时指示器
        while(!is_empty_linkstack(hs))
        {
            enter_linkqueue(q,pop_linkstack(hs));
        }

        enter_linkqueue(q,ball);
        count ++;

        if(is_true_ballqueue(q))
            break;
    }

    return count / 2;
}

int main(int argc, const char *argv[])
{
    int ball;
    int day;
    LinkQueue *q = create_linkqueue();
    LinkStack *mstack = create_empty_linkstack();
    LinkStack *fstack = create_empty_linkstack();
    LinkStack *hstack = create_empty_linkstack();

    for(ball = 1;ball <= 27;ball ++)
    {
        enter_linkqueue(q,ball);
    }

    day = answer_balltime(q,mstack,fstack,hstack);

    printf("ball time day:%d\n",day);

    return 0;
}
