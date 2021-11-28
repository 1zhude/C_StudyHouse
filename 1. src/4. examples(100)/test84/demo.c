/*
* 项目名称： 一个C语言的用例
* 项目功能： 判断一个偶数是否可以拆成两个素数之和
* 项目时间： 2021-11-27
* 项目作者： ZZD
*/
// ===================== 头文件声明 ===============================
#include<stdio.h>
#include<stdlib.h>
// ===================== 函数声明 ==================================
int PrimerNumber(unsigned short number);
// =================================================================
// 函数名称：main
// 函数功能：判断一个偶数是否可以拆成两个素数之和
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf
// =================================================================
int main(void)
{
    int i32Ret = -1;
    unsigned short u16InputNumber = 0x0;
    /*变量初始化*/       
    do
    { 
        printf("Pelase input one even number\n");
        i32Ret = scanf("%d", &u16InputNumber);// 键盘输入数字
        if (i32Ret != 1)
        {
            printf("scanf input error\n");
        }
        else
        {
            // 判断该数是否能拆分为两个素数
            for (size_t i = 0; i < u16InputNumber; i++)
            {
                if (PrimerNumber(i) && PrimerNumber(u16InputNumber-i))
                {
                    printf("%d = %d + %d\n", u16InputNumber, i, (u16InputNumber-i));
                    break;
                }  
            }
        }
    }
    while((u16InputNumber%2));
    return 0;
}
/****************************************************************************************************************
*函数名称：PrimerNumber
*函数功能：判断输入数字是否为素数
*输入参数：number
*输出参数：是素数：1 不是素数：0
*全局变量：无
*全局模块：无
****************************************************************************************************************/
int PrimerNumber(unsigned short number)
{
    /*大于0小于4的数字均为素数*/
    if (number < 4)
    {
        return 1; 
    }
    else if (!(number % 2))/*若输入为偶数，则必定不是素数*/
    {
        return 0; 
    }
    else
    {
        for (size_t i = 3; i < (sqrt(number) + 1); i++)// 判断输入是否为素数
        {
            if (!(number%i))
            {
                return 0;
            }  
        } 
    }
 
    return 1;
}