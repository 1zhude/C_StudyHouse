/*
* 项目名称： 一个C语言的用例
* 项目功能： 输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
* 项目时间： 2021-10-08
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ===================== 函数声明 =================================
void fun(unsigned short *atrry, unsigned short count);
// ===================== 全局宏定义 ===============================
#define swap(x,y)       x = x^y, y = x^y, x = x^y
// ================================================================
// 函数名称：main
// 函数功能：将输入数字序列的最大放在句首最小的放在最后
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf 
// ================================================================
int main(void)
{
	// 定义变量
	int i32Ret = -1;
	unsigned short InputNumbers[6] = {10, 20, 30, 40, 50, 60};
	// 输入数组序列
	printf("Please input six unsigned short number: \n");
	for (size_t i = 0; i < 6; i++)
	{
		scanf("%d", &InputNumbers[i]);
		fflush(stdin);// 清空输入流
	}
	
	fun(InputNumbers, 6);// 调用函数
	printf("MAX = %d, MIN = %d\n", InputNumbers[0], InputNumbers[5]);
	return 0;
}
// ================================================================
// 函数名称：fun
// 函数功能：将输入数字序列的最大放在句首最小的放在最后
// 输入参数：*atrry,count :输入序列、输入序列长度
// 输出参数：无
// 全局变量：无
// 调用模块：swap
// ================================================================
void fun(unsigned short *atrry, unsigned short count)
{
	unsigned short count_max = 0;// 保存最大数据的数组下标
	unsigned short count_min = 0;// 保存最小数据的数组下标

	for (size_t i = 0; i < count; i++)
	{
		if (atrry[i] > atrry[0])
		{
			count_max = i;
		}	
	}
	swap(atrry[count_max], atrry[0]);// 交换数据

	for (size_t i = 0; i < count; i++)
	{
		if (atrry[i] > atrry[count -1])
		{
			count_min = i;
		}	
	}
	swap(atrry[count_min], atrry[0]);// 交换数据
}