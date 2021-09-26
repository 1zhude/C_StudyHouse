/*
* 项目名称： 一个C语言的用例
* 项目功能： 宏#define命令练习3。
* 项目时间： 2021-09-26
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ===================== 宏定义声明 ===============================
#define   MAX 
#define   MAXIMUM(x,y) (x>y)?x:y
#define   MINIMUM(x,y) (x>y)?y:x
// ================================================================
// 函数名称：main
// 函数功能：宏#define命令练习3。
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf scanf
// ================================================================
int main(void)
{
	unsigned short u16InputA = 0x10;
	unsigned short u16InputB = 0x20;
	
	#ifdef MAX
		printf("large number is %d\n", MAXIMUM(u16InputA, u16InputB));
	#else
		printf("small number is %d\n", MINIMUM(u16InputA, u16InputB));
	#endif

	#ifndef MIN
		printf("small number is %d\n", MINIMUM(u16InputA, u16InputB));
	#else
		printf("large number is %d\n", MAXIMUM(u16InputA, u16InputB));
	#endif

	#undef MAX
	
	#ifdef MAX
		printf("large number is %d\n", MAXIMUM(u16InputA, u16InputB));
	#else
		printf("small number is %d\n", MINIMUM(u16InputA, u16InputB));
	#endif

	#define MIN
	#ifndef MIN
		printf("small number is %d\n", MINIMUM(u16InputA, u16InputB));
	#else
		printf("large number is %d\n", MAXIMUM(u16InputA, u16InputB));
	#endif
	return 0;
}
