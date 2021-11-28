/*
* 项目名称： 一个C语言的用例
* 项目功能： 读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的 ＊
* 项目时间： 2021-11-28
* 项目作者： ZZD
*/
// ===================== 头文件声明 ===============================
#include<stdio.h>
#include<string.h>

// ===================== 函数声明 ==================================
// =================================================================
// 函数名称：main
// 函数功能：入口函数
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf
// =================================================================
int main(void)
{
    int i32Ret = -1;
    unsigned short InputNumber = 0x0;
    for (size_t i = 0; i < 7; i++)
    {
        printf("Please input one 0 ~ 50 number:\n");
        i32Ret = scanf("%d", &InputNumber);
        if (i32Ret != 1) 
        {
            printf("scanf inout error\n");
        }
        else
        {
            /*    循环打印'*'    */
            for (size_t i = 0; i < InputNumber; i++)
            {
                printf("*");
            }
            printf("\n");
        }    
    }
    
      
    return 0;
}
