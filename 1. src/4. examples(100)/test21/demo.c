/*
* 项目名称： 一个C语言的用例
* 项目功能： 计算桃子数量
* 项目时间： 2021-09-20
* 项目作者： ZZD
*/
// ===================== 系统头文件 ================================
# include<stdio.h>
# include<math.h>
// ==================================================================
// 函数名称：main
// 函数功能：计算桃子数量
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：scanf printf
// ================================================================
int main(void)
{
	int i32Ret = -1;
	unsigned int b_i32InputDayCount = 0x0;// 输入第几天
	unsigned int b_i32DayCount = 0x0;// 计数
	unsigned int b_i32InputToday = 0x0;// 今天桃子数量
	unsigned int b_i32NumberYesterday = 0x1;// 前一天桃子数量

	printf("please input one unsigned int number\n");// 打印信息
	i32Ret = scanf(" %d", &b_i32InputDayCount);// 输入一个无符号整型数
	if(i32Ret < 0)
	{
		printf("input failed\n");
	}
	// 循环计算
	for (b_i32DayCount = 1; b_i32DayCount < b_i32InputDayCount; b_i32DayCount++)
	{
		b_i32InputToday = (b_i32NumberYesterday + 1) * 2;// 计算桃子数量
		b_i32NumberYesterday = b_i32InputToday;// 将今天桃子数量赋值给前一天
	}
	printf("Peach numbers = %d\n", b_i32InputToday);// 打印信息
	return 0;
}