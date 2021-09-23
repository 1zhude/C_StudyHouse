/*
* 项目名称： 一个C语言的用例
* 项目功能： 判断一个数是否为质数？
* 项目时间： 2021-09-22
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ================================================================
// 函数名称：main
// 函数功能：判断一个数是否为质数？
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：
// ================================================================
int main(void)
{
	int i32Ret = -1;
	unsigned int i32InputNnmber = 0x00;// 输入字符串数组
	unsigned int count1 = 0x02;// 除数从2开始

	printf("Please input one > 1 number: \n");// 打印信息
	i32Ret = scanf("%d", &i32InputNnmber);// 输入数字
	if(i32Ret <= 0)
	{
		printf("scanf input error\n");// 打印信息
	}
	fflush(stdin);// 清空输入缓冲区
	
	// 循环查找是否又相同字符
	while(1)
	{
		if((i32InputNnmber % count1) == 0 && i32InputNnmber != count1 )
		{
			printf("%d is not Prime number\n", i32InputNnmber);// 输出结果	
			break;	
		}
	    else if (count1 == i32InputNnmber)
		{
			printf("%d is Prime number\n", i32InputNnmber);// 输出结果
			break;
		}
		else
		{
			count1 ++;// 除数加1
		}
	}
}
