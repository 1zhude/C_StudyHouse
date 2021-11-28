/*
* 项目名称： 一个C语言的用例
* 项目功能： 结构体应用示例
* 项目时间： 2021-11-28
* 项目作者： ZZD
*/
// ===================== 宏定义声明 ===============================
// ===================== 头文件声明 ===============================
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// ===================== 结构体声明 ==================================
struct demotag
{
    float constant;
    char * pointer;
};
// =================================================================
// 函数名称：main
// 函数功能：入口函数
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf demotag
// =================================================================
int main(void)
{
    struct demotag demostruct;
    char string[] = "www.baidu.com";

    demostruct.constant = 1.23;
    demostruct.pointer = string;

    printf("%f\n",demostruct.constant);
    printf("%s\n",demostruct.pointer);
    return 0;
}
