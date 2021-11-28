/*
* 项目名称： 一个C语言的用例
* 项目功能： 查找满足条件的`??`
* 项目时间： 2021-11-27
* 项目作者： ZZD
*/
// ===================== 头文件声明 ===============================
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// ===================== 函数声明 ==================================
// =================================================================
// 函数名称：main
// 函数功能：查找满足条件的`??`
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf
// =================================================================
int main(void)
{
    unsigned short u16tempA     = 809;
    unsigned short u16TestCount = 10;

    for (u16TestCount; u16TestCount < 99; u16TestCount++)
    {
        if (((u16tempA * u16TestCount) <= 9999) && ((u16tempA * u16TestCount) >= 1000) 
            && ((8 * u16TestCount) <= 99) && ((8 * u16TestCount) >= 10) 
            && ((9 * u16TestCount) <= 999)&& ((9 * u16TestCount) >= 100))
        {
            printf("%d = 800 * %d + 9 * %d\n", (u16tempA * u16TestCount), u16TestCount, u16TestCount);
        }
        
    }
    return 0;
}
