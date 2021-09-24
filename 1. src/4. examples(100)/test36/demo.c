/*
* 项目名称： 一个C语言的用例
* 项目功能： 求100之内的素数。
* 项目时间： 2021-09-24
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ===================== 函数声明 ===============================
int Prime_Number(unsigned int number);
// ================================================================
// 函数名称：main
// 函数功能：求100之内的素数。
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf Prime_Number
// ================================================================
int main(void)
{
	int i32Ret = -1;
	unsigned int i32Number = 1;
	for(i32Number = 2; i32Number < 100; i32Number++)
	{
		i32Ret = Prime_Number(i32Number);// 调用质数判断函数
		if(i32Ret == 1)
		{
			printf("%d ", i32Number);// 输出结果
		}
	}
	printf("\n");
}
// ==============================================================
// 函数名称：Prime_Number
// 函数功能：判断输入参数是否为质数
// 输入参数: number ： 0~65535
// 输出参数：1：质数 0：非质数
// 全局变量：无
// 调用模块：
// ===============================================================
int Prime_Number(unsigned int number)
{
	unsigned int b_count = 2;
	while(1)
	{
		if((number % b_count) == 0 && number != b_count)// 判断是否有0和本身以外的其他数可以整除
		{
			return 0;
		}
	    else if (number == b_count)// 满足质数的条件
		{
			return 1;
		}
		else
		{
			b_count ++;// 除数加1
		}
	}
}
