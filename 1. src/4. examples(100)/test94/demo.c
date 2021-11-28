/*
* 项目名称： 一个C语言的用例
* 项目功能： 时间举例2
* 项目时间： 2021-11-28
* 项目作者： ZZD
*/
// ===================== 宏定义声明 ===============================
// ===================== 头文件声明 ===============================
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// ===================== 函数声明 ==================================
void caizi(void);
// =================================================================
// 函数名称：main
// 函数功能：入口函数
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf time localtime asctime
// =================================================================
int main(void)
{
    caizi();
    return 0;
}
// =================================================================
// 函数名称：caizi
// 函数功能：猜字函数
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：
// =================================================================
void caizi(void)
{
    int i32Ret = -1;
    char inputc;
    unsigned short u16Answer = 0x0;
    unsigned short u16Count = 0x0;
    unsigned short InputNUmber = 0x0;

    /*产生随机数作为答案*/
    srand(time(NULL));
    u16Answer = rand()%100 + 1;

    // printf("%d \n", u16Answer);
    // 进入循环
    while(1)
    {
        printf("Please input your answer:\n");
        i32Ret = scanf("%d", &InputNUmber);
        if (i32Ret != 1)
        {
            printf("scanf error\n");
        }
        fflush(stdin);
        if (InputNUmber == u16Answer)
        {
            printf("success \n");
            if (u16Count == 1)
            {
                printf("you are talented \n");
                getchar();
                printf("please input [Y/N] : continue/exit \n");
                scanf("%c", &inputc);
                if ((inputc == 'Y') || (inputc == 'y'))
                {
                    caizi();
                }
                else
                {
                    printf("bey bey\n");
                    break;
                }    
            }
            else if(u16Count <= 5)
            {
                printf("you can better \n");
                getchar();
                printf("please input [Y/N] : continue/exit \n");
                scanf("%c", &inputc);
                if ((inputc == 'Y') || (inputc == 'y'))
                {
                    caizi();
                }
                else
                {
                    printf("bey bey\n");
                    break;
                } 
            }
            else if(u16Count < 10)
            {
                printf("you are good \n");
                getchar();
                printf("please input [Y/N] : continue/exit \n");
                scanf("%c", &inputc);
                if ((inputc == 'Y') || (inputc == 'y'))
                {
                    caizi();
                }
                else
                {
                    printf("bey bey\n");
                    break;
                }
            }
            else if(u16Count < 15)
            {
                printf("you are common \n");
                getchar();
                printf("please input [Y/N] : continue/exit \n");
                scanf("%c", &inputc);
                if ((inputc == 'Y') || (inputc == 'y'))
                {
                    caizi();
                }
                else
                {
                    printf("bey bey\n");
                    break;
                } 
            }
            else
            {
                printf("you are loser \n");
                getchar();
                printf("please input [Y/N] : continue/exit \n");
                scanf("%c", &inputc);
                if ((inputc == 'Y') || (inputc == 'y'))
                {
                    caizi();
                }
                else
                {
                    printf("bey bey\n");
                    break;
                } 
            }
        }
        else if (InputNUmber < u16Answer)
        {
            printf("too small \n");
        }
        else
        {
            printf("too large \n");
        }
        u16Count++;
    }
}