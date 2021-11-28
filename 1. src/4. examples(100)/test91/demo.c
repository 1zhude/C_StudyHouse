/*
* 项目名称： 一个C语言的用例
* 项目功能： 读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的 ＊
* 项目时间： 2021-11-28
* 项目作者： ZZD
*/
// ===================== 宏定义声明 ===============================
// ===================== 头文件声明 ===============================
#include<stdio.h>
#include<time.h>
// ===================== 函数声明 ==================================
// =================================================================
// 函数名称：main
// 函数功能：入口函数
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf time localtime asctime
// =================================================================
int main()
{
    time_t rawtime;
    struct tm *timeinfo;
    
    time(&rawtime);// 获取时间
    timeinfo = localtime(&rawtime);// 转换时间格式
    printf("local time is %s\n", asctime(timeinfo));

    return 0;
}