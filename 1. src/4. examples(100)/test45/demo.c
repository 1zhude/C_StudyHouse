/*
* 项目名称： 一个C语言的用例
* 项目功能： 学习使用register定义变量的方法。
* 项目时间： 2021-09-24
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ================================================================
// 函数名称：main
// 函数功能：学习使用register定义变量的方法。
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf  
// ================================================================
int main(void)
{
	register unsigned short reg_u16NumberA = 0;
	unsigned short u16Sum = 0;
	unsigned short u16Count = 0;
	// 求和操作
	for(u16Count = 0; u16Count <= 100; u16Count++)
	{
		u16Sum +=u16Count;
	}
	printf("%d\n",u16Sum);
	return 0;
}
