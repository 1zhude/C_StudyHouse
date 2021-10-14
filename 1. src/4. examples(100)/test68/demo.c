/*
* 项目名称： 一个C语言的用例
* 项目功能： 输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
* 项目时间： 2021-10-08
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
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
	unsigned short InputNumbers[6] = {10, 20, 30, 40, 50, 60};
	unsigned short InputNumbers_Behind[6] = {0};
	unsigned short count_behind = 0x0;
	unsigned short count = 0x0;

	// 输入数组序列
	printf("Please input six unsigned short number: \n");
	for (size_t i = 0; i < 6; i++)
	{
		scanf("%d", &InputNumbers[i]);
		fflush(stdin);// 清空输入流
	}
	
	// 输入数组偏移量
	printf("Please input < six number: \n");
	scanf("%d", &count_behind);
	fflush(stdin);// 清空输入流
	
	// 数组后移
	for (size_t i = 0; i < (6 - count_behind); i++)
	{
		InputNumbers_Behind[i + count_behind] = InputNumbers[i];
	}
	// 末尾移动至数组最前面
	for (size_t i = 0; i < count_behind; i++)
	{
		InputNumbers_Behind[i] = InputNumbers[(6 - count_behind) + i];
	}
	// 打印信息
	for (size_t i = 0; i < 6; i++)
	{
		printf("%d\n", InputNumbers_Behind[i]);
	}
	
	return 0;
}
