/*
* 项目名称： 一个C语言的用例
* 项目功能： 宏#define命令练习3。
* 项目时间： 2021-09-26
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ===================== 宏定义声明 ===============================
#define   LAG >  
#define   SMA <
#define   EQ  == 
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
	int i32Ret =-1;
	unsigned short u16InputA = 0x00;
	unsigned short u16InputB = 0x00;
	
	printf("please input two unsigned short number:\n");
	i32Ret = scanf("%d %d", &u16InputA, &u16InputB);// 输入参数
	fflush(stdin);
	if(i32Ret <= 0)
	{
		printf("input error\n");
	}	
	
	if (u16InputA LAG u16InputB)// 判断A大于B
	{
		printf("%d\n", u16InputA);
	}
	else if (u16InputA SMA u16InputB)// 判断A小于B
	{
		printf("%d\n", u16InputB);
	}
	else if (u16InputA EQ u16InputB)// 判断A等于B
	{
		printf("%d %d\n", u16InputA, u16InputB);
	}
	else
	{

	}
	return 0;
}
