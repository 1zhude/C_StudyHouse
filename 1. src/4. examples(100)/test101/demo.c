/*
* 项目名称： 一个C语言的用例
* 项目功能： 比较两个字符串的最大相同单词
* 项目时间： 2021-08-26
* 项目作者： ZZD
*/
// ===================== 系统头文件 =======================================
# include<stdio.h>
# include<math.h>
// ========================================================================
// 函数名称：main
// 函数功能：比较两个字符串的最大相同单词
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：
// ========================================================================
#include<stdio.h>
#include<string.h>

int main(void)
{
	char s[100] = { "This is C programming text" };
	char t[100] = { "This is a text for C programming" };
	
	int i = 0;
	int j = 0;
	int count = 0;
	int start_count = 0;
	int max = 0;

	for (i= 0; i <= strlen(s) ; i++)
	{
		for(j = 0; j <= strlen(t); j++)// 字符串s中单个字符与字符串t中所有字符比较
		{
			if ((s[i] == t[j]) && (t[j] != ' ') && (i != strlen(s)))// 判断相同字符
			{
				count++;// 单词长度计数
				i++;// 单词逐个字母比较移位
			}
			else 
			{
				i = count > 0 ? i - count: i;// 将i恢复循环计数	
				if (count > max)// 判断是否位最长相同单词	
				{
					max = count;// 保存单词长度
					start_count = j -max;// 相同单词在字符串的开始位
				}
				count = 0; // 清空单词长度
			}
		}	
	}
	
	// 打印信息
	for (i = 0; i < max; i++)
	{
		printf("%c", t[start_count + i]);
	}
	printf("\n");
	return 0;		
}