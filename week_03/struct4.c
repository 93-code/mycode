/* 19:37 2015-03-31 Tuesday */
#include <stdio.h>

struct student
{
    char name[5];
    int id;
    short score;
};

struct student1
{
    int id;
    char name[5];
    short score;
};

int main()
{
    struct student s1;
    struct student *ps;
    struct student1 s2;
    struct student1 *ps2;
    ps = &s1;
    ps2 = &s2;
    printf("s1 : %d \n",sizeof(s1));
    printf("ps : %d \n",sizeof(ps));
    printf("===========\n");
    printf("s2 : %d \n",sizeof(s2));
    printf("ps2 : %d \n",sizeof(ps2));
    return 0;
}
