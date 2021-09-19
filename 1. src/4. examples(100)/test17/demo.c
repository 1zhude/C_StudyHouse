/*
* 项目名称： 一个C语言的用例
* 项目功能： 统计出其中英文字母、空格、数字和其它字符的个数。
* 项目时间： 2021-09-19
* 项目作者： ZZD
*/
// ===================== 系统头文件 =======================================
# include<stdio.h>
# include<math.h>
// ========================================================================
// 函数名称：main
// 函数功能：统计出其中英文字母、空格、数字和其它字符的个数。
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：
// ========================================================================

int main(void)
{
	char b_c8Str;// 保存输入字符
	unsigned int b_i32Char   = 0x0;// 字符数量统计
	unsigned int b_i32Space  = 0x0;// 空格数量统计
	unsigned int b_i32Number = 0x0;// 数字数量统计
	unsigned int b_i32Other  = 0x0;// 其他数量统计

	printf("please input a str \n");// 打印信息
	while(1)
	{
		b_c8Str = getchar();
		if((b_c8Str >= 'a' && b_c8Str <= 'z') || ((b_c8Str >= 'A' && b_c8Str <= 'Z')))// 判断输入是否为字母
		{
			b_i32Char++;// 字符数量加1
		}
		else if(b_c8Str <= '9' && b_c8Str >= '0')
		{
			b_i32Number++;// 数字数量加1
		}
		else if(b_c8Str == ' ')
		{
			b_i32Space++;// 空格数量加1	
		}
		else if(b_c8Str == '\n')
		{
			break;
		}
		else
		{
			b_i32Other++;// 其他数量加1
		}
	}
	printf("b_i32Char = %d, b_i32Number = %d, b_i32Space = %d, b_i32Other = %d\n", b_i32Char, b_i32Number, b_i32Space, b_i32Other);// 打印信息

	return 0;
}