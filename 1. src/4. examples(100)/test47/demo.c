/*
* 项目名称： 一个C语言的用例
* 项目功能： 宏#define命令练习2。
* 项目时间： 2021-09-26
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ===================== 宏定义声明 ===============================
#define   exchange(x,y)     {int t; t = x; x = y; y = t;}// 带参宏定义
// ================================================================
// 函数名称：main
// 函数功能：宏#define命令练习2。
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf scanf
// ================================================================
int main(void)
{
	int i32Ret =-1;
	unsigned short u16InputA = 0x20;
	unsigned short u16InputB = 0x10;
	
	printf("please input two unsigned short number:\n");
	i32Ret = scanf("%d", &u16InputA);// 输入参数
	fflush(stdin);
	if(i32Ret <= 0)
	{
		printf("input error\n");
	}	
	printf("%d\n",  u16InputA);
	i32Ret = scanf("%d", &u16InputB);// 输入参数
	if(i32Ret <= 0)
	{
		printf("input error\n");
	}	

	printf("%d %d\n", u16InputA, u16InputB);
	exchange(u16InputA, u16InputB);// 交换输入值
	printf("%d %d\n", u16InputA, u16InputB);
	
	return 0;
}
