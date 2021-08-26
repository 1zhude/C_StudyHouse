/*
* 项目名称： 一个C语言的用例
* 项目功能： 判断101~200之间所有素数？
* 项目时间： 2021-08-26
* 项目作者： ZZD
*/
// ===================== 系统头文件 =======================================
# include<stdio.h>
// ========================================================================
// 函数名称：main
// 函数功能：判断101~200之间所有素数？
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：
// ========================================================================
int main(void *arg)
{
    unsigned int b_InputNumbner = 0;
    unsigned int b_Count = 0;// 计数
    for(b_InputNumbner = 101; b_InputNumbner < 200; b_InputNumbner++)
    {
        for(b_Count = 2; b_Count < b_InputNumbner; b_Count++)
        {
        
            if((b_InputNumbner % b_Count) == 0)
            {
                break;
            }   
        }
        if(b_Count >= b_InputNumbner)// 判断是否有提前跳出循环
        {
            printf("%d \n", b_Count);
        }
    }
    return (0);
}