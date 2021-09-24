/*
* 项目名称： 一个C语言的用例
* 项目功能： 对十个数进行排序。
* 项目时间： 2021-09-24
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ===================== 宏定义声明 ===============================
#define           AMOUNT           10
#define           swap(x,y)        x = x^y, y = x^y, x = x^y
// ================================================================
// 函数名称：main
// 函数功能：对十个数进行排序。
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf scanf 
// ================================================================
int main(void)
{
	int i32Ret = -1;
	unsigned int i32Number = 10;
	unsigned int i32NumberA = 1;
	unsigned int i32InputNumber[10] = {0};// 保存输入数据

	printf("Please input ten unsigned int number:\n");// 打印信息
	for(i32Number = 0; i32Number < AMOUNT; i32Number++)
	{
		i32Ret = scanf("%d", &i32InputNumber[i32Number]);
		if (i32Ret <= 0)
		{
			printf("Input number error\n");
		}
		
	}

	// 对数组进行排序
	for(i32Number = 0; i32Number < AMOUNT; i32Number++)
	{
		for(i32NumberA = (i32Number + 1); i32NumberA < AMOUNT; i32NumberA++)
		{
			if(i32InputNumber[i32Number] > i32InputNumber[i32NumberA])// 判断是否为最小值
			{
				swap(i32InputNumber[i32Number], i32InputNumber[i32NumberA]);// 交换数值
			}
		}
		printf("%d %d\n", i32Number, i32InputNumber[i32Number]);// 输出结果
	}
}
