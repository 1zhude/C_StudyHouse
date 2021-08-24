/*
 *  C_demo_test1.c
 *  开发者：  周朱德
 *  开发日期：2021-7-23
 *  项目功能：C语言例程:交换两个无符号整型数值，在不定义新变量的情况下
 *
 */
#include <stdio.h>
#include "C_common_func.h"

#define  ONE     1
#define  TWO     0
// 与C_commom_func中数据交换函数功能一致
#define  change_data(x,y)    x = x^y, y = x^y, x = x^y; // 交换A，B数据

int main (int argc, char **argv)
{
    int i32Ret = -1;// 定义执行结果变量
    unsigned int TempA = 0; // 定义变量A
    unsigned int TempB = 0; // 定义变量B

    // 输入变量A
    printf("please input a unsigned int number A: \r\n");
    scanf("%d", &TempA);

    // 输入变量B
    printf("please input a unsigned int number B: \r\n");
    scanf("%d", &TempB);

    // 打印信息
    printf("input number : \r\n");
    printf("TempA = %-d\r\n", TempA);
    printf("TempB = %-d\r\n", TempB);

    // 对输入数据进行交换操作
    i32Ret = change_data(TempA, TempB);
    if(i32Ret != 0)
    {
        printf("change data failed \r\n");
    }

    // 打印信息
    printf("output number : \r\n");
    printf("TempA = %-d\r\n", TempA);
    printf("TempB = %-d\r\n", TempB);

    printf("program end!\n");
    
    return  (0);
}
