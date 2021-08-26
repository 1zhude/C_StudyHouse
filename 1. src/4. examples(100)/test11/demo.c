/*
* 项目名称： 一个C语言的用例
* 项目功能： 计算兔子数量
* 项目时间： 2021-08-26
* 项目作者： ZZD
*/
// ===================== 系统头文件 =======================================
# include<stdio.h>
# include<stdlib.h>
# include<windows.h>
// ========================================================================
// 函数名称：main
// 函数功能：计算兔子数量
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：
// ========================================================================
int main(void *arg)
{
    unsigned int b_Rabbit_Counts_Frist = 1;// 第一个月兔子为1对
    unsigned int b_Rabbit_Counts_Second = 1;// 第二个月兔子为1对
    unsigned int b_Rabbit_Counts_Counts = 0;// 兔子总数
    unsigned int b_Month_Counts = 1;// 月份循环计数
    unsigned int b_Month = 0;// 月份
    
    printf("Please input a > 2 unsigned int number"); // 打印信息      
    scanf("%d", &b_Month);// 获取输入月份
    for(b_Month_Counts = 0; b_Month_Counts < b_Month-2; b_Month_Counts++)
    {
        b_Rabbit_Counts_Counts = b_Rabbit_Counts_Frist + b_Rabbit_Counts_Second;// 当月兔子数量
        if(b_Month_Counts == (b_Month-3))
        {
            printf("Rabbit numbers is %d \n", b_Rabbit_Counts_Counts); // 打印当月兔子数量
        }   
        b_Rabbit_Counts_Frist = b_Rabbit_Counts_Second;// 将前一个月兔子数量赋予前前月
        b_Rabbit_Counts_Second = b_Rabbit_Counts_Counts;// 将当月兔子数量赋予一个月       
    }
    return (0);
}