/*
* 项目名称： 一个C语言的用例
* 项目功能： 判断101~200之间所有素数？
* 项目时间： 2021-08-26
* 项目作者： ZZD
*/
// ===================== 系统头文件 =======================================
# include<stdio.h>
# include<math.h>
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
    unsigned int b_InputNumbner = 256;
    unsigned int b_Hundred = 0;// 百数
    unsigned int b_Ten = 0;// 十数
    unsigned int b_One = 0;// 个数

    for(b_InputNumbner = 100; b_InputNumbner < 1000; b_InputNumbner++)
    {
        b_Hundred = b_InputNumbner/100;// 提取百位
        b_Ten = b_InputNumbner/10 - b_Hundred * 10;// 提取十位
        b_One = b_InputNumbner % 10;// 提取个位
        b_Hundred = (unsigned int)pow(b_Hundred, 3);// 求百位的立方
        b_Ten = (unsigned int)pow(b_Ten, 3);// 求十位的立方
        b_One = (unsigned int)pow(b_One, 3);// 求个位的立方

        if((b_Hundred + b_Ten + b_One) == b_InputNumbner)// 判单是否满足水仙数条件
        {
            printf("%d \n", b_InputNumbner);// 打印信息
        }
    }
    return (0);
}