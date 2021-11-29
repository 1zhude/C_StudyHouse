/*
* 项目名称： 一个C语言的用例
* 项目功能： 最后一项
* 项目时间： 2021-11-29
* 项目作者： ZZD
*/
// ===================== 宏定义声明 ===============================
// ===================== 头文件声明 ===============================
#include<stdio.h>
#include<string.h>
// ===================== 结构体声明 ================================
typedef struct  student
{
    int ID;
    int math;
    int English;
    int Chinese;
    int average;
    char Name[20];
}Stu;
// =================================================================
// 函数名称：main
// 函数功能：入口函数
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：
// =================================================================
int main(void)
{
    int i32Ret = -1;
    Stu stu[5];
    FILE *fp;

    /* 输入五个学生的个人信息 */
    for (size_t i = 0; i < 5; i++)
    {
        scanf("%d %s %d %d %d", &stu[i].ID, &stu[i].Name, &stu[i].math, &stu[i].English, &stu[i].Chinese);
        stu[i].average = (stu[i].math + stu[i].English + stu[i].Chinese)/3;
    }

    fp = fopen("stud", "w");

   /* 输入五个学生的个人信息 */
    for (size_t i = 0; i < 5; i++)
    {
        fprintf(fp, "%d %s %d %d %d %d", &stu[i].ID, &stu[i].Name, &stu[i].math, &stu[i].English, &stu[i].Chinese, stu[i].average);
    }
    
    fclose(fp);
    return 0;
}
