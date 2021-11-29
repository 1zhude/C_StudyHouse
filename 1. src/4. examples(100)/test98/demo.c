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
// 调用模块：printf 
// =================================================================
int main(void)
{
    char Inputch[20];
    char *filename = "test";
    FILE *fp;
   
    printf("Please input one filename:\n");
    fp = fopen(filename, "w");// 打开只写的方式文本

    printf("Please input str\n");
    gets(Inputch);// 输入字符串
   
    for (size_t i = 0; i < strlen(Inputch); i++)
    {
       if ((Inputch[i] > 'a') && (Inputch[i] < 'z'))
       {
           Inputch[i] -= 32;
       }   
    }
    fprintf(fp, "%s", Inputch);
    fclose(fp);
    return 0;
}
