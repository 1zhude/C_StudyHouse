/*
* 项目名称： 一个C语言的用例
* 项目功能： 字符串排序
* 项目时间： 2021-11-26
* 项目作者： ZZD
*/
// ===================== 头文件声明 ===============================
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// ===================== 函数声明 ==================================
void swap_str(char *str1, char *str2);
// =================================================================
// 函数名称：main
// 函数功能：字符串排序
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf
// =================================================================
int main(void)
{
    char str1[20], str2[20], str3[20];
    
    // 输入三个字符串
    printf("Please input three str\n");
    fgets(str1, sizeof(str1)/sizeof(char), stdin);
    fgets(str2, sizeof(str2)/sizeof(char), stdin);
    fgets(str3, sizeof(str2)/sizeof(char), stdin);

    // 降序排列字符串
    if (strcmp(str1,str2) < 0)// 若str1小于str2
    {
        swap_str(str1,str2);
    }
    if (strcmp(str1,str3) < 0)// 若str1小于str3
    {
        swap_str(str1,str3);
    }
    if (strcmp(str2,str3) < 0)// 若str2小于str3
    {
        swap_str(str2,str3);
    }
   
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    
    return 0;
}
// ====================================================================================
// 函数名称：swap_str
// 函数功能：交换两个字符串
// 输入参数：需要交换的两个字符串 str1 str2
// 输出参数：无
// 全局变量：无
// 全局模块：strcpy
// ====================================================================================
void swap_str(char *str1, char *str2)
{
    char *tempstr[20];
    // 通过中间变量tempstr交换str1和str2
    strcpy(tempstr, str1);
    strcpy(str1, str2);
    strcpy(str2, tempstr);
}