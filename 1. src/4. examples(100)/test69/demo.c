/*
* 项目名称： 一个C语言的用例
* 项目功能： 输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
* 项目时间： 2021-10-08
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
# include<stdlib.h>
# include<windows.h>
// ===================== 宏定义声明 ===============================
// 设置输出字符集
#define MS_DOS_OUTPUT_CP	437		// 可显示扩展Ascii码, 但不能显示中文! 
#define CHINESE_OUTPUT_CP	936		// 可显示中文, 但不能显示扩展Ascii码! 
// ================================================================
// 函数名称：main
// 函数功能：将输入数字序列的最大放在句首最小的放在最后
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf 
// ================================================================
int main(void)
{
	// 定义变量
	unsigned short *p;// 保存编号
	unsigned short PeopleNumber[50] = {0};// 保存编号
	unsigned short InputPeopleNumber = 0x0;// 保存这个圈人数
	unsigned short InputPeopleNumberCountA = 0x0;
   	unsigned short InputPeopleNumberCountB = 0x0;
   	unsigned short InputPeopleNumberCountreturn = 0x0;

    SetConsoleOutputCP(CHINESE_OUTPUT_CP);// 设置终端可输出拓展ASCII码

	// 输入数组序列
	printf("请输入一圈人的人数（小于50）: \n");
	scanf("%d", &InputPeopleNumber);
	fflush(stdin);// 清空输入流

	p = PeopleNumber;// 将指针赋初始地址
	// 给这圈人进行编号
	for(ssize_t i = 0; i < InputPeopleNumber; i++)
	{
		*(p+i) = i + 1;
	}

	// 循环查找剩余的编号
	while (InputPeopleNumberCountreturn < (InputPeopleNumber - 1))
	// 当退出人数为InputPeopleNumber - 2时停止循环，剩下最后一人
	{
		if(*(p+InputPeopleNumberCountA) != 0)// 判断这个编号是否为0
		{
			InputPeopleNumberCountB ++;
		}
		if(InputPeopleNumberCountB == 3)// 判断编号是否为3
		{
			InputPeopleNumberCountB = 0;
			*(p+InputPeopleNumberCountA) = 0;// 将编号为3的人编号置为0
			InputPeopleNumberCountreturn++;// 退出人数加1
		}	
		InputPeopleNumberCountA++;//指针后移
		// 排列至队尾
		if(InputPeopleNumberCountA == InputPeopleNumber)
		{
			InputPeopleNumberCountA = 0; // 重新开始
		}
	}
	// 打印信息
	for(ssize_t i = 0; i < 50; i++)
	{	
		// 编号是否为0
		if (PeopleNumber[i] != 0)
		{	
			printf("剩下的编号是: %d\n", PeopleNumber[i]);		
		}
	}
	return 0;
}
