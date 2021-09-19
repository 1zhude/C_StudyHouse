/*
* 项目名称： 一个C语言的用例
* 项目功能： 计算某个公式
* 项目时间： 2021-09-19
* 项目作者： ZZD
*/
// ===================== 系统头文件 =======================================
# include<stdio.h>
# include<math.h>
// ========================================================================
// 函数名称：main
// 函数功能：计算某个公式
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：
// ========================================================================

int main(void)
{
	int i32Ret = -1;
	long long b_i64Sum        = 0x0;// 算法求和结果
	unsigned int b_i32InputA  = 0x0;// 输入数字
	unsigned int b_i32InputB  = 0x0;// 运算次数

	printf("please input two unsigned int numbers\n");// 打印信息
	i32Ret = scanf(" %d %d", &b_i32InputA, &b_i32InputB);
	if(i32Ret < 0)
	{
		printf("input failed\n");
	}
	printf("b_i32InputA = %d\n", b_i32InputA);// 打印信息2
	
	while(b_i32InputB --)
	{
		b_i64Sum = b_i32InputA + b_i64Sum;// 求和
		b_i32InputA = b_i32InputA * 10 + b_i32InputA % 10;// 计算每个加数的值
		printf("b_i32InputA = %d\n", b_i32InputA);// 打印信息2
	}
	printf("sum = %d\n", b_i64Sum);// 打印信息
	return 0;
}