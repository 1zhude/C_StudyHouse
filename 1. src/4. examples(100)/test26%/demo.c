/*
* 项目名称： 一个C语言的用例
* 项目功能： 求5!-递归
* 项目时间： 2021-09-20
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ===================== 函数声明 =================================
unsigned long long Factorial(unsigned long long *Number);
// =================================================================
// 函数名称：main
// 函数功能：递归
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf
// =================================================================
int main(void)
{
	int i32Ret = -1;
	unsigned long long b_i32Input = 0x0;// 输入需要计算的数
	printf("Please input a unsigned long long number:\n");
	i32Ret = scanf("%lld", &b_i32Input);
	if(i32Ret < 0)
	{
		printf("scanf input error \n");// 打印信息

	}
	else
	{
		printf("%lld \n", Factorial(&b_i32Input));// 计算阶乘并打印信息	
	}
	return 0;
}
// =================================================================
// 函数名称: Factorial
// 函数功能: 计算0~20以内阶乘
// 输入参数: *Number : 0~20
// 输出参数: 无
// 全局变量：无
// 调用全局模块: 无
// =================================================================
unsigned long long Factorial(unsigned long long *Number)
{
	unsigned long long NumberFactorial = *Number;
	if(*Number == 0)
	{
		return 1;// 0! = 1
	}
	else
	{
		NumberFactorial --;
		*Number *= Factorial(&NumberFactorial);
		return *Number;
	}
}