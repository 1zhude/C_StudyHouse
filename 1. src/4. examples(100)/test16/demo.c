/*
* 项目名称： 一个C语言的用例
* 项目功能： 1求两个无符号整型变量的最大公约数以及最小公倍数
* 项目时间： 2021-08-26
* 项目作者： ZZD
*/
// ===================== 系统头文件 =======================================
# include<stdio.h>
# include<math.h>
// ===================== 全局宏定义声明 ====================================
#define swap(A,B)   A = (A^B), B = (A^B), A = (A^B);// 交换A、B
// ========================================================================
// 函数名称：main
// 函数功能：1.从键盘获取两个无符号整型变量
//           2.求出两个数的最大公约数和以及最小公倍数
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：
// ========================================================================

int main(void)
{
	int i32Ret = -1;
	unsigned int b_i32InputA = 0x0;// 输入变量A
	unsigned int b_i32InputB = 0x0;// 输入变量B
	unsigned int b_i32InputMultiply = 0x0;// 输入乘积
	unsigned int b_i32Integer = 0x0;// 整数
	unsigned int b_i32Remainder = 0x0;// 余数

	printf("please input two numbers\n");// 打印信息
	i32Ret = scanf("%d %d", &b_i32InputA, &b_i32InputB);// 键盘输入两个整数
	if(i32Ret < 0)
	{
		printf("input number failed\n");// 打印信息
	}

	b_i32InputMultiply = b_i32InputA * b_i32InputB; // 求输入变量的乘积

	// 判断输入变量A、B大小
	if(b_i32InputA < b_i32InputB)
	{
		swap(b_i32InputA, b_i32InputB);// 交换A、B
	}
	// 进入死循环
	while(1)
	{
		b_i32Integer = b_i32InputA /b_i32InputB;// 取整
		b_i32Remainder = b_i32InputA %b_i32InputB;// 取余
		if(b_i32Remainder == 0)
		{
			printf("MAX GCD is : %d\n",b_i32InputB);// 输出最大公约数
			printf("MIN LCM is : %d\n",b_i32InputMultiply /b_i32InputB);// 输出最小公倍数
			break;
		}
		else
		{
			b_i32InputA = b_i32InputB; // 将上一次被除数赋值给除数
			b_i32InputB = b_i32Remainder; // 将上一次余数赋值给被除数
		}
	}

	return 0;
}