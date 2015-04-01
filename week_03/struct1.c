/* 16:28 2015-03-31 Tuesday */
#include <stdio.h>
#include <string.h>

int main()
{
    struct student
    {
        int id;
        char name[20];
        char sex;
    }stu,*pstu;
    
    pstu = &stu;
    stu.id = 12;
    strcpy(stu.name,"sss");
    stu.sex = 'M';

    printf("Id = %d,Name = %s,Sex = %c\n",stu.id,stu.name,stu.sex);

    pstu->id = 22;
    strcpy(pstu->name,"xxxxx");
    pstu->sex = 'F';
    printf("Id = %d,Name = %s,Sex = %c\n",stu.id,stu.name,stu.sex);

    return 0;
}
