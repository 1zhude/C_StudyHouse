/*
* 工程名称：practice(2.12.1)/practice(2.12.2)
* 工程功能：练习C
* 开发作者："ZZD"
* 开发日期：2021/08/11
*/
// 系统头文件(标准输入/输出头文件)
#include<stdio.h>
// 系统全局宏定义
#define   PRACTICE1_1      0 // 标识2.12.1是否运行？   
#define   PRACTICE2_2      0 // 标识2.12.2是否运行？ 
#define   PRACTICE2_3      1 // 标识2.12.3是否运行？ 
// ==========================================================================
// 函数名称： 主函数
// 函数功能：一个编程练习
// 输入参数：   无
// 输出参数：   无
// 调用全局变量：无 
// 调用全局模块：无
// ==========================================================================
int main(void)
{
    #if PRACTICE1_1
    // 打印信息
    printf("周 朱德\n");// 同一行显示姓名

    printf("周\n朱德\n");// 姓、名在不同行
  
    // 姓、名在不同行
    printf("周");
    printf(" 朱德\n");
    
    #elif PRACTICE2_2
    // 打印姓名
    printf("姓名：");
    printf("周朱德\n");
    //打印地址
    printf("地址：");
    printf("XX省XX市XX县XX镇XX村\n");

    #elif PRACTICE2_3
    int My_age_year;// 定义年龄变量用于存放输入年龄(以年为单位)
    int My_age_day; // 定义年龄变量用于存放转后为`天`后的年龄(以天为单位)

    printf("Please input your ages: \n");
    scanf("%d",&My_age_year);// 键盘输入年龄
    My_age_day = My_age_year * 365;// 将输入的年龄转换为计量单位为`天`
    printf("Your age is %d",My_age_day);// 打印信息

    #endif
    return (0);
}
