/*
* 项目名称： 一个C语言的用例
* 项目功能： 求1+2!+3!+...+20!的和
* 项目时间： 2021-09-20
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// =================================================================
// 函数名称：main
// 函数功能：求1+2!+3!+...+20!的和
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf
// =================================================================
  
int main()
{
    int i;
    long double sum,mix;
    sum=0,mix=1;
    for(i=1;i<=20;i++)
    {
        mix=mix*i;
        sum=sum+mix;
    }  
    printf("%Lf\n",sum);  
}