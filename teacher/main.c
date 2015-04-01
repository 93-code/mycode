#include <stdio.h>

int c;//声明本文件内已定义过该全局变量,使其作用范围从声明处开始
extern int g;//声明工程内其它文件内已定义过该全局变量

//void fun();
extern void fun();

int main()
{
    int a = 0;

    printf("a = %d\n",a); 

    printf("c = %d\n",c); 

    printf("g = %d\n",g); 

    fun();


    return 0;
}


int c = 5;//全局变量的定义
