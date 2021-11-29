/*
* 项目名称： 一个C语言的用例
* 项目功能： 结构体应用示例
* 项目时间： 2021-11-28
* 项目作者： ZZD
*/
// ===================== 宏定义声明 ===============================
// ===================== 头文件声明 ===============================
#include<stdio.h>
#include<string.h>
// ===================== 结构体声明 ==================================

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
    char strM[20];
    char strS[5];
    unsigned short u16Count = 0x0;
    unsigned short j = 0x0;
    unsigned short u16Count1 = 0x0;
    unsigned short Mlength = 0x0;
    unsigned short Slength = 0x0;

    printf("Please input two str\n");
    gets(strM);//获取母串
    gets(strS);//获取子串

    Mlength = strlen(strM);
    Slength = strlen(strS);
    /*查找母串中含有子串的数量*/
    for (size_t i = 0; i <= (Mlength - Slength); i++)
    {
        for (j = 0,u16Count = i; (j < Slength) && (strM[u16Count] == strS[j]); u16Count++,j++)
        {
        }
        if (j == Slength)
        {
            u16Count1++;
        }
    }
    printf("%d\n", u16Count1); 

    return 0;
}
