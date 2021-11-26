/*
* 项目名称： 一个C语言的用例
* 项目功能： 根据N为奇数和偶数执行不同的分支
* 项目时间： 2021-11-24
* 项目作者： ZZD
*/
// ===================== 头文件声明 ===============================
# include<stdio.h>
# include<stdlib.h>
// ===================== 函数声明 ===============================
float Even_function(unsigned short Number);
float Odd_function(unsigned short Number);
// =================================================================
// 函数名称：main
// 函数功能：根据N为奇数和偶数执行不同的分支
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf
// =================================================================
int main(void)
{
	int i32Ret = -1;
	float Result = 0;
	unsigned short u16Inputnumber = 0;
	// 定义函数指针并进行初始化操作
	float (*p) (unsigned short );
	p = Even_function;
	float (*p1) (unsigned short );
	p1 = Odd_function; 

	printf("Please input one > 0 unsigned short number\n");
	i32Ret = scanf("%d", &u16Inputnumber);// 键盘输入数据
	if(i32Ret != 1)
	{
		printf("Input error\n");
	}
	// 判断输入是否为偶数？
	if(!(u16Inputnumber % 2))
	{
		Result = (*p)(u16Inputnumber);
		printf("%f \n", Result);// 执行偶数分支
	}
	else
	{
		Result = Odd_function(u16Inputnumber);
		printf("%f \n", Result);// 执行偶数分支
	}
	return 0;
}
// =================================================================
// 函数名称：Even_function
// 函数功能：当输入参数为偶数时，执行公式：1/2 + 1/4 + ... + 1/n;
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：无
// =================================================================
float Even_function(unsigned short Number)
{
	float Sum = 0;
	float TempNumber = (float)Number;
	// 执行循环体
	do
	{
		if (TempNumber < 2.0)// 当输入数据小于1时，退出循环
		{
			break;
		}
		
		Sum += (1/TempNumber);// 执行公司
		TempNumber -= 2;
	}while(1);

	return Sum;
}
// =================================================================
// 函数名称：Odd_function
// 函数功能：当输入参数为偶数时，执行公式：1 + 1/3 + 1/5 + ... + 1/n;
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：无
// =================================================================
float Odd_function(unsigned short Number)
{
	float Sum = 0;
	float TempNumber = (float)Number;
	// 执行循环体
	do
	{
		if (TempNumber < 1.0)// 当输入数据小于1时，退出循环
		{
			break;
		}

		Sum += (1/TempNumber);// 执行公式
		TempNumber -= 2;

	}while(1);

	return Sum;
}