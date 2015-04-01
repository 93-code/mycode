/* 17:53 2015-03-31 Tuesday */
#include <stdio.h>
int main()
{
    struct stu
    {
        char name[5];
        int id;
        short score;
    }s1;

    printf("sizeof(struct stu)= %d\n",sizeof(struct stu));
    return 0;

}
