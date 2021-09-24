/*
* 项目名称： 一个C语言的用例
* 项目功能： 求一个3*3矩阵对角线元素之和。
* 项目时间： 2021-09-24
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
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
	unsigned int u32Count = 0;
	unsigned int u32CountA = 10;
	unsigned int u32InputNumber = 0;
	unsigned int u32Number[11] = {0, 1, 2, 3, 4, 6, 7, 8, 9, 10};// 已经排完序的数

	printf("Please input nine unsigned int number:\n");// 打印信息
	i32Ret = scanf("%d",&u32InputNumber);
	if (i32Ret <= 0)
	{
		printf("Input number error\n");
	}
	if(u32InputNumber >= u32Number[9])// 判断是否大于最后一位
	{
		u32Number[10] = u32InputNumber;// 将输入数字放于最后一位
	}
	else
	{
		for(u32Count = 0; u32Count < 9; u32Count ++)
		{
			if(u32InputNumber < u32Number[u32Count])// 判断是否插入位置
			{
				break;// 退出循环				
			}
		}
	}
	// 循环后移数组
	for(u32CountA = 10; u32CountA > u32Count; u32CountA --)
	{
		u32Number[u32CountA] = u32Number[u32CountA - 1];// 后移
	}
	u32Number[u32Count] = u32InputNumber;// 插入数字

	for(u32Count = 0; u32Count < 10; u32Count ++)
	{
		printf("%d\n", u32Number[u32Count]);	
	}
}
