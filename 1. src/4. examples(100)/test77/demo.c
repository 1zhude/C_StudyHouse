/*
* 项目名称： 一个C语言的用例
* 项目功能： 练习使用指向指针的指针
* 项目时间： 2021-11-26
* 项目作者： ZZD
*/
// ===================== 头文件声明 ===============================
# include<stdio.h>
// ===================== 函数声明 ===============================
// =================================================================
// 函数名称：main
// 函数功能：根据N为奇数和偶数执行不同的分支
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf
// =================================================================
int main(void)
{
	// 定义一个指针数组
	const char *s[] = {"man", "woman", "boy", "sister", "girl"};
	char **p = NULL;// 定义一个指向指针的指针

	for (size_t i = 0; i < 5; i++)
	{
		p = &s[i];// 将二级指针指向
		printf("%s\n", *p);// 打印信息
	}

	return 0;
}