/*
 * C_common_func.c
 *
 *  Created on: Jul 23, 2021
 *      Author: 
 */

#include "C_common_func.h"
#if 0
// ============================================================================================
// 函数名称： 数据交换函数1
// 函数功能： 交换两个从键盘输入的两个无符号整型变量
// 输入参数： *data1，*data2
// 输出参数： i32Ret： 成功返回0，失败返回1
// 调用全局变量：无
// 调用全局模块：无
// ============================================================================================
int change_data(unsigned int *data1, unsigned int *data2)
{
    int i32Ret = -1;// 定义执行结果变量
    // 定义临时储存变量
    unsigned int TempA = 0;
    unsigned int TempB = 0;

    // 将变量储存至临时变量
    TempA = *data1;
    TempB = *data2;

    // 数据交换执行操作
    TempA = TempA^TempB; // 对两个变量进行异或操作（加密操作）
    TempB = TempA^TempB; // 将加密后数据与TempB进行异或操作（解秘操作）
    TempA = TempA^TempB; // 将加密后数据与TempA进行异或操作（解秘操作）

    // 判断数据是否交换成功？
    if((TempA == *data2) && (TempB == *data1))
    {
        i32Ret = 0;
        // 将临时储存变量储存输出
        *data1 = TempA;
        *data2 = TempB;
    }
    else
    {
        i32Ret = -1;
    }
    return i32Ret;// 返回执行结果
}
#elif 1
// #define  change_data(x,y)    x = x^y, y = x^y, x = x^y; // 交换A，B数据
#endif