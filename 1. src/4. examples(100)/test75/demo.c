/*
* 项目名称： 一个C语言的用例
* 项目功能： 逆序输出一个整数
* 项目时间： 2021-11-14
* 项目作者： ZZD
*/
// ===================== 头文件声明 ===============================
# include<stdio.h>
# include<stdlib.h>
// =================================================================
// 函数名称：main
// 函数功能：逆序输出一个整数
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf
// =================================================================
int main(void)
{
	int i32Ret = -1;
	unsigned short u16Inputnumber = 0x0;
	unsigned short u16Integernumber = 0x0;
	unsigned short u16Remaindernumber = 0x0;

	printf("please input one unsigned short number\n");
	i32Ret = scanf("%d", &u16Inputnumber);
	if(i32Ret != 1)
	{
		perror("scanf error \n");
	}
	// 将输入进行逆序输出
	while (u16Inputnumber)
	{
		u16Remaindernumber = ((u16Remaindernumber * 10) + (u16Inputnumber %10));
		u16Inputnumber = u16Inputnumber /10;
	}
	printf("%d \n", u16Remaindernumber);

	return 0;
}
