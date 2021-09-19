/*
* 项目名称： 一个C语言的用例
* 项目功能： 
* 项目时间： 2021-09-17
* 项目作者： ZZD
*/
// ===================== 系统头文件 =======================================
# include<stdio.h>
# include<math.h>
// ========================================================================
// 函数名称：main
// 函数功能：1.从键盘获取学生成绩
//           2.根据学生成绩对学生分为A、B、C
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：
// ========================================================================
int main(void *arg)
{
    unsigned int b_InputNumbner = 0;// 学生分数
    char b_StudentGrade = '0';// 学生级别
    printf("Please input one student score\n"); // 打印信息      
    scanf("%d", &b_InputNumbner);// 获取输入数据  
    b_StudentGrade = b_InputNumbner >= 90 ? 'A':(b_InputNumbner >= 60 ? 'B':'C');// 根据成绩对学生进行分级   
    printf("%d is %c \n", b_InputNumbner, b_StudentGrade);// 打印信息  
    return (0);
}