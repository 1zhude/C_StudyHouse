/*
* 项目名称： 一个C语言的用例
* 项目功能： 求一个3*3矩阵对角线元素之和。
* 项目时间： 2021-09-24
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ===================== 宏定义声明 ===============================
#define           AMOUNT           3
// ================================================================
// 函数名称：main
// 函数功能：求一个3*3矩阵对角线元素之和
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf scanf 
// ================================================================
int main(void)
{
	int i32Ret = -1;
	unsigned int i32Number = 0;
	unsigned int i32NumberA = 0;
	unsigned int i32InputNumber[3][3];// 保存输入数据
	unsigned int i32SumDiagonal = 0;// 保存对角线之和

	printf("Please input unsigned int number:\n");// 打印信息
	for(i32Number = 0; i32Number < AMOUNT; i32Number++)
	{
		for(i32NumberA = 0; i32NumberA < AMOUNT; i32NumberA++)
		{
			i32Ret = scanf("%d",&i32InputNumber[i32Number][i32NumberA]);
			if (i32Ret <= 0)
			{
				printf("Input number error\n");
			}
			if(i32Number == i32NumberA)
			{
				i32SumDiagonal += i32InputNumber[i32Number][i32NumberA];
			}	
		}
	}
	printf("SumDiagonal = %d\n", i32SumDiagonal);// 输出结果
}
