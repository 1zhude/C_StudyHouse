/*
* 工程名称：practice(2.12.6)
* 工程功能：练习C程序调用其他函数
* 开发作者："ZZD"
* 开发日期：2021/08/11
*/
// 系统头文件(标准输入/输出头文件)
#include<stdio.h> 
// ==========================================================================
// 函数名称： 主函数
// 函数功能：打印输入值的2倍及平方
// 输入参数：   无
// 输出参数：   无
// 调用全局变量：无 
// 调用全局模块：无
// ==========================================================================
int main(void)
{
    int toes;// 定义变量用于储存输入变量
    int toes_double;// 定义变量用于储存输入变量的两倍
    int toes_square;// 定义变量用于储存输入变量的平方
    printf("Please input a int number： \n");// 打印信息
    scanf("%d", &toes);// 等待键盘输入数值
    toes_double = toes*2; // 将输入数值的两倍赋于另一个变量
    toes_square = toes * toes;// 将输入数值的平方赋于另一个变量
    printf("iuput numer toes is %d, double toes is %d, square toes is %d", toes, toes_double, toes_square);// 显示输入内容，及运算后的结果。
}
