/********************************************************************
* 项目名称： 一个C语言的用例
* 项目功能： 综合画图。
* 项目时间： 2021-11-12
* 项目作者： ZZD
********************************************************************/
#include <math.h>
#include <stdio.h>
#include <graphics.h>
// ******************宏定义声明***********************************
#define PAI 3.1415926
#define B   0.809
// ================================================================
// 函数名称：main
// 函数功能：综合画图。
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf 
// ================================================================
int main(void*arg,char *argv[]) 
{
    int i32Count   = 0; // 计数变量
    int i32CountB   = 0; // 计数变量
    int i32CountC   = 0; // 计数变量

    int i32gDriver = 0;// 图像系统驱动变量
    int i32gMode   = 0;// 图像显示模式
    int x0,y0,x1,y1;  
    int tempA   = 0; 

    // 设置图形初始化参数
    i32gDriver = CGA;
    i32gMode   = CGAC0;

    initgraph(&i32gDriver, &i32gMode,"");// 初始化图形系统
    setcolor(3);// 设置画笔颜色
    setbkcolor(GREEN);// 设置填充色为黄色

    // 画同心圆
    x0 = 150;
    y0 = 150;
    circle(x0,y0,10);
    circle(x0,y0,20);
    circle(x0,y0,50);

    for(i32Count = 0; i32Count < 16; i32Count++)
    {
        tempA = (2*PAI/16)*i32Count;
        x1 = ceil(x0 + 48 * cos(tempA));
        y1 = ceil(y0 + 48 * sin(tempA) * B);
        setcolor(2);// 设置画笔颜色
        line(x0,y0,x1,x1);
    }
    setcolor(3);// 设置画笔颜色
    circle(x0,y0,60);
    outtextxy(10,170,"press a key"); 
    getchar();
    floodfill(202,100,WHITE);
    getchar();

    for(i32CountB = 0; i32CountB <= 500; i32CountB++)
    {
        setcolor(RED);// 设置画笔颜色
        for(i32Count = 0; i32Count < 16; i32Count++)
        {
            tempA = (2*PAI/16)*i32Count + (2*PAI/180)*i32CountB;
            x1 = ceil(x0 + 48 * cos(tempA));
            y1 = ceil(y0 + 48 * sin(tempA) * B);
            setcolor(RED);// 设置画笔颜色
            line(x0,y0,x1,x1);
        }
        for(i32CountC = 1; i32CountC <= 50; i32CountC++)
        {
            tempA = (2*PAI/16)*i32Count + (2*PAI/180)*i32CountB -1;
            x1 = ceil(x0 + 48 * cos(tempA));
            y1 = ceil(y0 + 48 * sin(tempA) * B);
            line(x0,y0,x1,x1);
        }
    }
    printf("ending\n");
    getchar();

    return 0;  
}
