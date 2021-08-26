/*
* 项目名称： 一个C语言的用例
* 项目功能： 输出9*9口诀表
* 项目时间： 2021-08-25
* 项目作者： ZZD
*/
// ===================== 系统头文件 =======================================
# include<stdio.h>
// ========================================================================
// 函数名称：main
// 函数功能：输出9*9口诀表
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：
// ========================================================================
int main(void *arg)
{
    unsigned int line_counts = 0;// 定义‘行’变量
    unsigned int list_counts = 0;// 定义‘列’变量

    for(line_counts = 1; line_counts < 10; line_counts++)// 行循环
    {
        for(list_counts = 1; list_counts <= line_counts; list_counts++)// 列循环
        {
            printf("%d * %d = %d  ", line_counts, list_counts, line_counts * list_counts);// 打印乘法表内容
        }
        printf("\n");// 换行
    }
    return (0);
}