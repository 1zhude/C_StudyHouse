/*
* 项目名称： 一个C语言的用例
* 项目功能： 测试字符串长度用例
* 项目时间： 2021-10-20
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ===================== 函数声明 ===============================
unsigned short strlength(char *str);
// ================================================================
// 函数名称：main
// 函数功能：测试用例
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf 
// ================================================================
int main(void)
{
	char InputStr[50];// 保存输入字符串
	unsigned short InputStrCount = 0;
	// 输入一个字符串
	printf("please input onr str\n");
	scanf("%s", InputStr);
	// 计算字符串长度
	InputStrCount = strlength(InputStr);
	printf("Input str length is %d\n", InputStrCount);
	return 0;
}
// ================================================================
// 函数名称：strlength
// 函数功能：求出输入字符串长度
// 输入参数：str 字符串
// 输出参数：strCount 字符串长度
// 全局变量：无
// 调用模块：无
// ================================================================
unsigned short strlength(char *str)
{
	unsigned short strCount = 0;
	// 计算字符串长度
	while(*(str++) != '\0')
	{
		strCount ++;
	}
	return strCount;
}