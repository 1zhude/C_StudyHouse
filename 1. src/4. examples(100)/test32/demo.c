/*
* 项目名称： 一个C语言的用例
* 项目功能： 剔除字符串中指定字符
* 项目时间： 2021-09-22
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ================================================================
// 函数名称：main
// 函数功能：剔除字符串中指定字符
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：
// ================================================================
int main(void)
{
	int i32Ret = -1;
	char str[256];// 输入字符串数组
	char i32InputCharSpecify;// 输入指定字母
	unsigned int count1 = 0x0;
	unsigned int count2 = 0x0;

	printf("Please input onr str: \n");
	i32Ret = scanf("%s", str);// 输入指定字母
	if(i32Ret <= 0)
	{
		printf("scanf input str error\n");
	}
	fflush(stdin);// 清空输入缓冲区
	printf("Please input first The letter: \n");
	i32Ret = scanf("%c", &i32InputCharSpecify);// 输入指定字母
	fflush(stdin);// 清空输入缓冲区
	if(i32Ret <= 0)
	{
		printf("scanf input specify char error\n");
	}
	// 循环查找是否又相同字符
	while(str[count1] != '\0')
	{
		if(str[count1] == i32InputCharSpecify)// 判断是否与指定字符相同
		{
			count2 = count1;// 获取当前字符所在位置
			while(str[count2] != '\0')// 剔除指定字符
			{
				str[count2] = str[count2 + 1];// 剔除指定字符后，后面字符前移
				count2 ++;
			}
		}
		count1 ++;
	}
	printf("%s\n",str);
}
