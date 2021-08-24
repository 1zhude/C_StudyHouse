/*
* 工程名称：demo2.2（fathm_ft.c）
* 开发作者：ZhouWuhen
* 开发日期：2021/08/10
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
    int feet = 0;// 定义变量‘尺’
    int fathoms = 0;// 定义变量‘英寻’

    fathoms = 2;// 将2赋值给fathoms
    feet = 6 * fathoms;// 将6倍的英寻赋值给尺
    // 打印信息
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);

    return (0);
}