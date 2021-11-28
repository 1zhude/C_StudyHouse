/*
* 项目名称： 一个C语言的用例
* 项目功能： 连接两个字符串
* 项目时间： 2021-11-28
* 项目作者： ZZD
*/
// ===================== 头文件声明 ===============================
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// ===================== 函数声明 ==================================
char* str_link(char *str1, char *str2);
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
    char *str = NULL;
    char str1[20];
    char str2[20];

    i32Ret = scanf("%s %s", str1, str2);
    if (i32Ret != 2)
    {
        printf("scanf input error\n");
    }
    else
    {
        str = str_link(str1, str2);// 将输入字符串连接成一个字符串
        printf("%s\n", str);
    }
    
    return 0;
}
// =================================================================
// 函数名称：main
// 函数功能：连接两个字符串
// 输入参数：str1 str2
// 输出参数：str
// 全局变量：无
// 调用模块：malloc strcat
// =================================================================
char* str_link(char *str1, char *str2)
{
    char *str = NULL;
    str = (char *)malloc(strlen(str1)+strlen(str2) + 1);// 分配动态内存

    str[0] = '\0';
    
    /*连接两个字符串*/
    strcat(str,str1);
    strcat(str,str2);
    return str;
}