/*
* 项目名称： 一个C语言的用例
* 项目功能： 求0-7可以组成奇数的个数
* 项目时间： 2021-11-27
* 项目作者： ZZD
*/
// ===================== 头文件声明 ===============================
#include<stdio.h>
// ===================== 函数声明 ==================================
// =================================================================
// 函数名称：main
// 函数功能：求0-7可以组成奇数的个数
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf
// =================================================================
int main(void)
{
    /*变量初始化*/
    long int u16OddNumber = 0x04;
    long int u16SumOddNumber = 0x04;
       
    printf("while number is 1 number odd number count is %ld\n", u16SumOddNumber);
    // 当数字为不同位时，奇数的数量。
    for (size_t i = 2; i <= 8; i++)
    {
        if (i == 2)
        {
           u16OddNumber *= 7;
        }
        else
        {
            u16OddNumber *= 8;
        }
        u16SumOddNumber += u16OddNumber;
        printf("while number is %d number odd number count is %ld\n", i,u16SumOddNumber);
    }
    
    printf("odd number sum is %ld\n", u16SumOddNumber);

    return 0;
}
