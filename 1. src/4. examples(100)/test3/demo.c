/*
* 项目名称： 一个C语言的用例
* 项目功能： 根据数学逻辑算出一组数
* 项目时间： 2021-08-18
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===================================
# include<stdio.h>
// ========================================================================
// 函数名称：main
// 函数功能：根据题目推算出满足条件的数
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：无
// ========================================================================
int main(void *arg)
{
    int x = 0, i = 0, j = 0, m =0, n = 0;
    for(i = 1; i < 168/2 +1; i++)// 循环计算i
    {
        if(168 % i == 0)// 判断i是否能够被168整除
        {
            j = 168/i;// 计算对应j的值
            // 判断满足i，j的条件
            if((i > j ) && ((i + j)%2 == 0) && ((i - j)%2 == 0))
            {
                m = (i + j)/2;// 计算m的值 
                n = (i - j)/2;// 计算n的值
                x = m *m - 268;// 计算x的值
                printf("%d + 268 = %d X %d\n", x, n, n);// 打印信息
                printf("%d + 100 = %d X %d\n", x, m, m);// 打印信息
            }
        }
    }
    return (0);
}