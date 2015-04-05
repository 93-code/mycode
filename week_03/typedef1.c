/* 14:26 2015-04-01 Wednesday */
#include <stdio.h>
#include <string.h>

typedef struct student
{
    int id;
    char name[5];
    short score;
}Stu;

int main()
{
    Stu s1;

    s1.id = 10;
    strcpy(s1.name,"jack");
    s1.score = 90;

    printf("ID    : %d\n",s1.id);
    printf("Name  : %s\n",s1.name);
    printf("Score : %d\n",s1.score);
    
    return 0;
}
