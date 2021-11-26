/*
* 项目名称： 一个C语言的用例
* 项目功能： 计算猴子分桃
* 项目时间： 2021-11-26
* 项目作者： ZZD
*/
// ===================== 头文件声明 ===============================
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// ===================== 函数声明 ==================================
// =================================================================
// 函数名称：main
// 函数功能：计算猴子分桃
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf
// =================================================================
int main(void)
{
    unsigned short u16pink_sum;
    unsigned short u16count = 0;
    unsigned short u16pink_five = 1;    

    while (u16count < 5)
    { 
        u16pink_sum = 4 * u16pink_five;
        for (u16count = 0; u16count < 5; u16count++)
        {
            if ((u16pink_sum % 4))
            {
                break;
            }
            u16pink_sum = ((u16pink_sum/4)*5) + 1;// 每次分桃时的桃子总数
        }
        u16pink_five++;// 最后一只猴子拿到桃子的数量
    }
    
    printf("%d\n", u16pink_sum);
    return 0;
}
