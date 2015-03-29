#include <stdio.h>

int g = 3;//全局变量的默认作用范围,从定义开始到本文件结束

//static 修饰全局变量或函数，限定其作用范围只能在本文件内
static void fun()
{
    printf("g = %d\n",g);
}
