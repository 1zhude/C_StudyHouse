/*
* 项目名称： 一个C语言的用例
* 项目功能： 计算小球自由下落
* 项目时间： 2021-09-19
* 项目作者： ZZD
*/
// ===================== 系统头文件 ================================
# include<stdio.h>
# include<math.h>
// ==================================================================
// 函数名称：main
// 函数功能：计算小球自由下落
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：scanf printf
// ================================================================
int main(void)
{
	int i32Ret = -1;
	float b_i32BallHigh     = 100;// 当前高度
	float b_i32BallDistance = 100;// 当前高度
	unsigned int b_i32Count      = 0x0;// 计数
	unsigned int b_i32Count1     = 0x0;// 用于for循环
	unsigned int b_i32InputCount = 0x0;// 输入下落次数

	printf("please input one unsigned int number\n");// 打印信息
	i32Ret = scanf(" %d", &b_i32InputCount);// 输入一个无符号整型数
	if(i32Ret < 0)
	{
		printf("input failed\n");
	}
	for(b_i32Count = 1; b_i32Count < b_i32InputCount; b_i32Count++)
	{
		b_i32BallHigh = b_i32BallHigh/2;// 小球落地前高度
		b_i32BallDistance += b_i32BallHigh * 2;// 小球经过的路程
	}
	b_i32BallHigh = b_i32BallHigh/2;// 小球最后一次落地后弹起的高度高度
	printf("S = %f H = %f\n", b_i32BallDistance, b_i32BallHigh);
	return 0;
}