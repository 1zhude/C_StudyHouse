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
    unsigned int b_Count = 2;// 百数
  
    printf("Please input one unsigned int number \n"); // 打印信息      
    scanf("%d", &b_InputNumbner);// 获取输入数据
    for(b_Count = 2; b_Count <= b_InputNumbner; b_Count++)
    {
        while((b_InputNumbner % b_Count) == 0)// 判断是否能够被最小质数整除
        {
            printf("%d", b_Count);// 打印质因数
            b_InputNumbner /= b_Count;// 进行下一步分解
            if(b_InputNumbner != 1)// 判断是否分解到无法再次分解
            {
                printf(" * ");// 打印乘号
            }
        }
    }
    return (0);
}