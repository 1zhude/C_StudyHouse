/*
* 项目名称： 一个C语言的用例
* 项目功能： 宏#define命令练习。
* 项目时间： 2021-09-26
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ===================== 宏定义声明 ===============================
#define   TRUE     1
#define   FALSE    0
#define   SQ(x)    x*x 
// ===================== 重定义声明 ===============================
typedef unsigned short BOOL ;
// ================================================================
// 函数名称：main
// 函数功能：宏#define命令练习。
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf  
// ================================================================
int main(void)
{
	int i32Ret =-1;
	BOOL isFlag = TRUE;// 标志位
	unsigned short u16Input = 1;

	printf("Input < 50 program end\n");// 打印信息
	// 求和操作
	while(isFlag)
	{
		printf("please input a unsigned short number:\n");
		i32Ret = scanf("%d", &u16Input);// 输入参数
		if(i32Ret <= 0)
		{
			printf("input error\n");
		}
		printf("%d\n",SQ(u16Input));// 打印信息
		if (u16Input >= 50)
		{
			isFlag = TRUE;
		}
		else
		{
			isFlag = FALSE;
		}		
	}
	return 0;
}
