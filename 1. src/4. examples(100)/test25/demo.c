/*
* 项目名称： 一个C语言的用例
* 项目功能： 求1+2!+3!+...+20!的和
* 项目时间： 2021-09-20
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ===================== 函数声明 =================================
void Factorial(unsigned long long *Number);
// =================================================================
// 函数名称：main
// 函数功能：求1+2!+3!+...+20!的和
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf
// =================================================================
int main(void)
{
	int i32Ret = -1;
	unsigned long long b_i32Factorial = 0x00;// 阶乘
	unsigned long long b_i32Sum = 0x0;// 累加
	unsigned int b_i32Input = 0x0;// 求和次数
	unsigned int b_i32SumNumberCount = 0x00;// 求和计数
	
	printf("Please input one unsigned int number :\n");// 打印信息
	i32Ret = scanf("%d", &b_i32Input);// 输入计算次数
	if(i32Ret < 0)
	{
		printf("scanf input failed \n");// 打印信息
	}
	// 循环计算
	for (b_i32SumNumberCount = 1; b_i32SumNumberCount <= b_i32Input; b_i32SumNumberCount++)
	{
		b_i32Factorial = (unsigned long long)b_i32SumNumberCount;
		Factorial(&b_i32Factorial);// 调用阶乘函数
		b_i32Sum += b_i32Factorial;// 将阶乘累加
	}
	printf("Sum = %lld \n", b_i32Sum);// 打印信息
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
void Factorial(unsigned long long *Number)
{
	unsigned int count = 0x0;
	unsigned long long NumberFactorial = *Number;
	*Number = 0x01;
	if(*Number == 0)
	{
		*Number *= 1  ;// 0!为1
	}
	for (count = 1; count <= NumberFactorial; count++)
	{
		*Number *= count  ;// 累乘运算
	}
}