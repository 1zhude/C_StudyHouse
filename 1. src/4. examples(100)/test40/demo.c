/*
* 项目名称： 一个C语言的用例
* 项目功能： 将一个数组逆序打印。
* 项目时间： 2021-09-24
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ===================== 宏定义声明 ===============================
#define     AMOUNT 10
#define     swap(x,y)   x = x^y, y = x^y, x = x^y
// ================================================================
// 函数名称：main
// 函数功能：将一个数组逆序打印。
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf scanf swap
// ================================================================
int main(void)
{
	int i32Ret = -1;
	unsigned int u32Count = 0;
	unsigned int u32CountA = 10;
	unsigned int u32InputNumber[10] = {0};

	printf("Please input ten unsigned int number:\n");// 打印信息
	for(u32Count = 0; u32Count < AMOUNT; u32Count ++)
	{
		i32Ret = scanf("%d",&u32InputNumber[u32Count]);// 输入数值
		if (i32Ret <= 0)
		{
			printf("Input number error\n");
		}
	}
	// 交换数值
	for(u32Count = 0; u32Count < AMOUNT/2; u32Count ++)
	{
		swap(u32InputNumber[u32Count],u32InputNumber[AMOUNT - u32Count - 1]);// 对数组进行首位交换
	}
	// 打印数组
	for(u32Count = 0; u32Count < AMOUNT; u32Count ++)
	{
		printf("%d ", u32InputNumber[u32Count]);
	}
	printf("\n");
}
