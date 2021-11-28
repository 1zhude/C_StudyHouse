/*
* 项目名称： 一个C语言的用例
* 项目功能： 判断一个素数能被几个9整除。
* 项目时间： 2021-11-27
* 项目作者： ZZD
*/
// ===================== 头文件声明 ===============================
#include<stdio.h>
#include<stdlib.h>
// ===================== 函数声明 ==================================
// =================================================================
// 函数名称：main
// 函数功能：判断一个素数能被几个9整除。
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf
// =================================================================
int main(void)
{
    int i32Ret = -1;
    long int u16InputNumber  = 0x09;
    unsigned short u16PrimerNumber = 0x0;
    unsigned short u16NUmberCount  = 0x0;

    printf("Pelase input one even number\n");
    i32Ret = scanf("%d", &u16PrimerNumber);// 键盘输入数字
    if (i32Ret != 1)
    {
        printf("scanf input error\n");
    }
    else
    {
        for (u16NUmberCount = 0;; u16NUmberCount++)
        {
            if ((u16InputNumber % u16PrimerNumber) == 0)
            {
                break;
            }
            else
            {
                u16InputNumber = ((u16InputNumber*10) + 9);
            }
        }
        printf("%d can except %d have9' primer %ld\n", u16PrimerNumber, u16NUmberCount, u16InputNumber); 
    }

    return 0;
}
