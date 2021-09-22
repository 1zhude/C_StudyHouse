/*
* 项目名称： 一个C语言的用例
* 项目功能： 请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。
* 项目时间： 2021-09-22
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ================================================================
// 函数名称：main
// 函数功能：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：
// ================================================================
int main(void)
{
	int i32Ret = -1;
	char i32InputCharFirst;// 输入第一个字母
	char i32InputCharSecond;// 输入第二个字母

	printf("Please input first The letter: \n");
	i32Ret = scanf("%c", &i32InputCharFirst);// 输入第一个字母
	fflush(stdin);// 清空输入缓冲区
	if(i32Ret <= 0)
	{
		printf("scanf input first The letter error\n");
	}
	switch (i32InputCharFirst)
	{
	case 'm':
		printf("Monday\n");
		break;
	case 'w':
		printf("Wednesday\n");
		break;
	case 'f':
		printf("Friday\n");
		break;
	case 't':
		printf("Please input second The letter: \n");
		i32Ret = scanf("%c", &i32InputCharSecond);// 输入第二个字母
		if(i32Ret <= 0)
		{
			printf("scanf input second The letter error\n");
		}
		if(i32InputCharSecond == 'u')
		{
			printf("Tuesday\n");
			break;
		}
		else if (i32InputCharSecond == 'h')
		{
			printf("Thursday\n");
			break;
		}	
	case 's':
		printf("Please input second The letter: \n");
		i32Ret = scanf("%c", &i32InputCharSecond);// 输入第二个字母
		if(i32Ret <= 0)
		{
			printf("scanf input second The lettererror\n");
		}
		if(i32InputCharSecond == 'a')
		{
			printf("Saturday\n");
			break;
		}
		else if (i32InputCharSecond == 'u')
		{
			printf("Sunday\n");
			break;
		}	
	default:
		break;
	}
}
