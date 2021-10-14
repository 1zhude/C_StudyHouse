/*
* 项目名称： 一个C语言的用例
* 项目功能： 按位取反
* 项目时间： 2021-09-27
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
# include<stdlib.h>
// ===================== 全局宏定义 ===============================
#define swap(x,y)       x = x^y, y = x^y, x = x^y
// ================================================================
// 函数名称：main
// 函数功能：按位取反
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf 
// ================================================================
int main(void)
{
	// 定义变量
	int i32Ret = -1;
	unsigned int *p_inputnumberA = NULL;
	unsigned int *p_inputnumberB = NULL;
	unsigned int *p_inputnumberC = NULL;
	// 初始化指针
	p_inputnumberA = (unsigned int *)malloc(sizeof(unsigned int));
	p_inputnumberB = (unsigned int *)malloc(sizeof(unsigned int));
	p_inputnumberC = (unsigned int *)malloc(sizeof(unsigned int));

	printf("Please input three unsigned int numbers:\n");// 打印信息
	// 输入变量
	i32Ret = scanf("%d%d%d",p_inputnumberA, p_inputnumberB, p_inputnumberC);
	fflush(stdin);// 清空数据流
	if(i32Ret == 3)
	{
		if (*p_inputnumberA < *p_inputnumberB)// 判断A是否大于B
		{
			swap(*p_inputnumberA,*p_inputnumberB);
		}
		if (*p_inputnumberA < *p_inputnumberC)// 判断A是否大于C
		{
			swap(*p_inputnumberA,*p_inputnumberC);
		}
		if (*p_inputnumberB < *p_inputnumberC)// 判断B是否大于C
		{
			swap(*p_inputnumberB,*p_inputnumberC);
		}

		printf("%d %d %d \n",*p_inputnumberA, *p_inputnumberB,*p_inputnumberC);// 打印信息
	}	

	return 0;
}
