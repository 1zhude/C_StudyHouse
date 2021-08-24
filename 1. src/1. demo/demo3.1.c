/*
* 工程名称：demo3.1（platinum.c）
* 工程功能：示例程序3.1
* 开发作者：ZZD
* 开发日期：2021/08/12
*/
// 系统头文件(标准输入/输出头文件)
#include<stdio.h>
// ==========================================================================
// 函数名称： 主函数
// 函数功能：一个C程序实例
// 输入参数：   无
// 输出参数：   无
// 调用全局变量： 
// 调用全局模块：
// ==========================================================================
int main(void)
{
    float weight;// 定义变量用于保存输入体重
    float value;// 用于储存相当于同等重量白金的价值

    printf("Are you worth your weight in platinum? \n");// 打印信息
    printf("Let's check it out. \n");// 打印信息
    printf("please enter your weight in pounds: \n");// 打印信息

    scanf("%f", &weight);// 输入体重
    value = 1700.0 * weight * 14.5833;// 计算同等重量的白金价值

    printf("your weight in platinum is worth $%.2f. \n", value);// 打印信息(其中"%.2f"表示保留两位小数)
    printf("your are easily worth that! if platinum price drop, \n");// 打印信息
    printf("eat more to maintain your value. \n");// 打印信息

    return (0);
}
