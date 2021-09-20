/*
* 项目名称： 一个C语言的用例
* 项目功能： 打印菱形
* 项目时间： 2021-09-20
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
# include<math.h>
// =================================================================
// 函数名称：main
// 函数功能：打印菱形
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf
// =================================================================
int main(void)
{
	unsigned int b_i32Row = 0x07;// 行
	unsigned int b_i32Column = 7;// 列
	unsigned int b_i32RowCount = 0x00;// 行计数
	unsigned int b_i32ColumnCount = 0x0;// 列计数

	// 循环计算
	for (b_i32RowCount = 0; b_i32RowCount < b_i32Row;  b_i32RowCount++)// 行循环
	{
		for (b_i32ColumnCount = 0; b_i32ColumnCount < b_i32Column;  b_i32ColumnCount++)// 列循环
		{
			if(b_i32RowCount <= b_i32Row/2)// 判断行数
			{
				if(b_i32ColumnCount  >= (b_i32Column/2 -b_i32RowCount) 
				 && b_i32ColumnCount <= (b_i32Column/2 +b_i32RowCount))// 打印'*'的列数
				{
					printf("*");// 打印信息
				}
				else
				{
					printf(" ");// 打印信息
				}
			}
			else
			{
				if(b_i32ColumnCount >= (b_i32Column/2 - (b_i32Row - b_i32RowCount - 1)) 
				&& b_i32ColumnCount <= (b_i32Column/2 + (b_i32Row - b_i32RowCount - 1)))// 打印'*'的列数
				{
					printf("*");// 打印信息
				}	
				else
				{
					printf(" ");// 打印信息
				}
			}	
		}
		printf("\n");// 打印信息
	}
	return 0;
}