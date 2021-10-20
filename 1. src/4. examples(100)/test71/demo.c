/*
* 项目名称： 一个C语言的用例
* 项目功能： 测试结构体使用用例
* 项目时间： 2021-10-20
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// ===================== 声明全局变量 ===============================
// 声明学生信息结构体
typedef struct 
{
	char name[20];// 姓名
	char sex[5]; // 性别
	unsigned short age;// 年龄
}Student;
Student inputstudent[5] ;
// ===================== 函数声明 ===============================
void Input(void);
void Onput(void);
// ================================================================
// 函数名称：main
// 函数功能：测试用例
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf 
// ================================================================
int main(void)
{
	Input();// 输入学生信息
	sleep(1);
	Onput();// 输出学生信息
	return 0;
}
// ================================================================
// 函数名称：Input
// 函数功能：键盘输入5个学生信息
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf scanf
// ================================================================
void Input(void)
{
	printf("please inpput five student informain\n");
	for (size_t i = 0; i < 5; i++)
	{
		// 输入学生信息
		scanf("%s %s %d", inputstudent[i].name, inputstudent[i].sex, &inputstudent[i].age);
		fflush(stdin);// 清空输入流
	}	
	printf("inpput end\n");
}
// ================================================================
// 函数名称：Onput
// 函数功能：打印学生信息
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf scanf
// ================================================================
void Onput(void)
{
	for (size_t i = 0; i < 5; i++)
	{
		printf("%s %s %d \n", inputstudent[i].name, inputstudent[i].sex, inputstudent[i].age);
		fflush(stdout);// 清空输出流
	}
	
}