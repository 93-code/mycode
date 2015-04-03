/* 19:27 2015-03-31 Tuesday */
#include <stdio.h>
#include <string.h>

struct people
{
    int id;
    char name[20];
    char sex;
};

int main()
{
    struct people p1;
    struct people *p2 = NULL;

    p1.id = 15;
    strcpy(p1.name,"lilei");
    p1.sex = 'm';

    printf("id : %d \n",p1.id);
    printf("name : %s \n",p1.name);
    printf("sex : %c \n",p1.sex);

    printf("--------------------\n");
    p2 = &p1;
    p2->id = 20;
    strcpy(p2->name,"jack");
    p2->sex = 'F';
    

    printf("id : %d \n",p1.id);
    printf("name : %s \n",p1.name);
    printf("sex : %c \n",p1.sex);
    return 0;
}
