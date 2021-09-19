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
// 调用模块：scanf printf
// ========================================================================

int main(void)
{
	int i32Ret = -1;
	unsigned int b_i32InputA     = 0x0;  // 输入数字
	unsigned int b_i32Dividend   = 0x1;// 被除数
	unsigned int b_i32Remainder  = 0x0;// 取余
	unsigned int b_i32Factor[100]= {0x0};// 保存因子
	unsigned int b_i32Count      = 0x0;// 计数
	unsigned int b_i32Count1     = 0x0;// 用于for循环

	printf("please input one unsigned int number\n");// 打印信息
	i32Ret = scanf(" %d", &b_i32InputA);// 输入一个无符号整型数
	if(i32Ret < 0)
	{
		printf("input failed\n");
	}
	while(b_i32InputA != 1)// 进入循环
	{
		b_i32Remainder = b_i32InputA % b_i32Dividend;// 取余数操作
		if(b_i32Remainder == 0)// 判断是否为因子
		{
			// 保存因子
			b_i32Factor[b_i32Count] = b_i32Dividend;
			b_i32Count ++;// 
		}
		if(b_i32Dividend == ( b_i32InputA /2))// 判断求因子是否结束
		{
			// 求所有因子的和
			for(b_i32Count1 = 1; b_i32Count1 < b_i32Count; b_i32Count1 ++)
			{
				b_i32Factor[0] += b_i32Factor[b_i32Count1];	
			}
			if(b_i32Factor[0] == b_i32InputA)// 判断是否为完美数
			{
				
				printf("%d ", b_i32InputA);
			}
			b_i32InputA--;// 继续判断下一个数是否为完美数
			b_i32Dividend = 0;// 被除数清零
			b_i32Count = 0;// 因子数组清零
		}	
		b_i32Dividend ++;// 被除数加1
	}
	printf("\n");// 打印信息
	return 0;
}