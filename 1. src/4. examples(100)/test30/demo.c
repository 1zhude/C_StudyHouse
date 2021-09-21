/*
* 项目名称： 一个C语言的用例
* 项目功能： 判断一个五位数是否为回文数。
* 项目时间： 2021-09-21
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ================================================================
// 函数名称：main
// 函数功能：判断一个五位数是否为回文数？
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：
// ================================================================
int main(void)
{
	int i32Ret = -1;
	long long i32InputNumber = 0x00;// 输入数字
	long long i32NumberThousandTen = 0x00;// 万位
	long long i32NumberThousand= 0x00;// 千位
	long long i32NumberBest= 0x00;// 百位
	unsigned int i32NumberTen= 0x00;// 千位
	unsigned int i32NumBit= 0x00;// 个位

	printf("Please input one five bit number: \n");
	i32Ret = scanf("%lld", &i32InputNumber);// 键盘输入一个五位数
	if(i32Ret <= 0)
	{
		printf("scanf input error\n");
	}
	// 获取万位
	i32NumberThousandTen = i32InputNumber/10000;
	// 获取千位
	i32NumberThousand = i32InputNumber/1000;
	i32NumberThousand = i32NumberThousand % 10;
	// 获取百位
	i32NumberBest = i32InputNumber/100;
	i32NumberBest = i32NumberBest % 10;
	// 获取十位
	i32NumberTen = i32InputNumber/10;
	i32NumberTen = i32NumberTen % 10;
	// 获取个位
	i32NumBit = i32InputNumber % 10;

	if((i32NumberThousandTen == i32NumBit) && (i32NumberThousand == i32NumberTen))// 判断个位是否为回文数
	{
		printf("This is one return number : %ld\n",i32InputNumber);
	}
	else
	{
		printf("This is not one return number : %ld\n",i32InputNumber);
	}
	return 0;
}
