/*
* 项目名称： 一个C语言的用例
* 项目功能： 利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
* 项目时间： 2021-09-21
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ===================== 函数声明 =================================
void Recursive_Printf(unsigned int InputNumber);
// ================================================================
// 函数名称：main
// 函数功能：递归
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf Recursive_Printf
// ================================================================
int main(void)
{
	unsigned int InputNumber = 0x05;// 输入字符数量
	printf("Please input five char: \n");// 打印信息
	Recursive_Printf(InputNumber);// 调用递归函数
	printf("\n");
	return 0;
}
// ================================================================
// 函数名称: Recursive_Printf
// 函数功能: 反向打印输入字符
// 输入参数: InputNumber
// 输出参数: 无
// 全局变量：无
// 调用全局模块: printf getchar putchar Recursive_Printf
// ================================================================
void Recursive_Printf(unsigned int InputNumber)
{
	char NextChar;
	if (InputNumber <= 1)
	{
		NextChar = getchar();// 输入字符
		printf("Output printf:");// 打印信息
		putchar(NextChar);// 输出字符
	}
	else
	{
		NextChar = getchar();// 输入字符
		Recursive_Printf(InputNumber-1);// 递归输入字符
		putchar(NextChar);// 输出字符
	}	
}