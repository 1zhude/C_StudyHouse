/*
* 项目名称： 一个C语言的用例
* 项目功能： 结构体应用示例
* 项目时间： 2021-11-28
* 项目作者： ZZD
*/
// ===================== 宏定义声明 ===============================
#define SWAP(x,y)           x = x^y, y = x^y, x = x^y;
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
    FILE *fpa, *fpb, *fpc;
    char stra[20];  
    char strb[20];    
  
    fpa = fopen("a.txt", "r");// 打开只写的方式文本
    fgets(stra, 19, fpa);// 获取文件信息
    fclose(fpa);// 关闭文件

    fpb = fopen("b.txt", "r");// 打开只写的方式文本
    fgets(strb, 20, fpb);// 获取文件信息
    fclose(fpb);// 关闭文件

    strcat(stra, strb);// 连接字符串
    // 数组排序
    for (size_t i = 0; i < (strlen(stra) - 1); i++)
    {
        for (size_t j = (strlen(stra) - 1); j > i; j--)
        {
            if(stra[j] < stra[j-1])
            {
                SWAP(stra[j], stra[j-1]);
            }
        } 
    }
    printf("%s", stra);
    fpc = fopen("c.txt", "w");// 打开文件c
    fprintf(fpc, "%s", stra);// 写入文件

    return 0;
}
