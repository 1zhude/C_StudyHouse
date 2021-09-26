/*
* 项目名称： 一个C语言的用例
* 项目功能： 输出带有笑脸的楼梯
* 项目时间： 2021-08-25
* 项目作者： ZZD
*/
// ===================== 系统头文件 =======================================
# include<stdio.h>
# include<stdlib.h>
# include<windows.h>
// ========================================================================
// 函数名称：main
// 函数功能：输出带有笑脸的楼梯
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：
// ========================================================================

// 设置输出字符集
#define MS_DOS_OUTPUT_CP	437		// 可显示扩展Ascii码, 但不能显示中文! 
#define CHINESE_OUTPUT_CP	936		// 可显示中文, 但不能显示扩展Ascii码! 

int main(void *arg)
{
    unsigned int board_line = 0;// 定义‘行’变量
    unsigned int board_list = 0;// 定义‘列’变量
   
    SetConsoleOutputCP(MS_DOS_OUTPUT_CP);// 设置终端可输出拓展ASCII码
    printf("\1\1 \n"); //打印笑脸 
    for(board_line = 0; board_line < 11; board_line++)// 行循环
    {
        for(board_list = 0; board_list < board_line; board_list++)// 列循环
        {
            printf("%c%c", 219,219); //打印黑格       
        }
        printf("\n");// 换行
    }
    return (0);
}