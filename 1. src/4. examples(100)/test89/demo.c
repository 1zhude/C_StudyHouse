/*
* 项目名称： 一个C语言的用例
* 项目功能： 读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的 ＊
* 项目时间： 2021-11-28
* 项目作者： ZZD
*/
// ===================== 宏定义声明 ===============================
#define swap(x,y)      x = x^y, y = x^y, x = x^y;
// ===================== 头文件声明 ===============================
#include<stdio.h>
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
    unsigned short InputNumber[4];
    unsigned short InputNum = 0x0;
    unsigned short TempA = 3;
    unsigned short TempB = 4;

    printf("Please input one 1000 ~ 9999 number:\n");
    i32Ret = scanf("%d", &InputNum);
    if (i32Ret != 1) 
    {
        printf("scanf inout error\n");
    }
    else
    {
        InputNumber[0] = InputNum/1000;      // 提取千位
        InputNumber[1] = (InputNum%1000)/100;// 提取百位
        InputNumber[2] = (InputNum%100)/10;  // 提取十位
        InputNumber[3] = InputNum%10;        // 提取个位
        /*加密*/
        for (size_t i = 0; i < 4; i++)
        {
            InputNumber[i] += 5;
            InputNumber[i] %= 10;
        }
        swap(InputNumber[0],InputNumber[3]);
        swap(InputNumber[1],InputNumber[2]);

        printf("%d\n", (InputNumber[0] * 1000 + InputNumber[1] * 100 + InputNumber[2] * 10 + InputNumber[3]));
    }    
    return 0;
}
