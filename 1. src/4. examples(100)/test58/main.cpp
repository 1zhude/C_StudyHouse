/********************************************************************
* 项目名称： 一个C语言的用例
* 项目功能： 学用rectangle画方形。
* 项目时间： 2021-11-12
* 项目作者： ZZD
********************************************************************/
#include <stdio.h>
#include <graphics.h>
// ================================================================
// 函数名称：main
// 函数功能：学用rectangle画方形。
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf 
// ================================================================
int main(void*arg,char *argv[]) 
{
    int i32Count   = 0; // 计数变量
    int i32gDriver = 0;// 图像系统驱动变量
    int i32gMode   = 0;// 图像显示模式
    int x0,y0,x1,y1;  

    // 设置图形初始化参数
    i32gDriver = VGA;
    i32gMode   = VGAHI;

    initgraph(&i32gDriver, &i32gMode,"");// 初始化图形系统
    setbkcolor(GREEN);// 设置填充色为黄色

    x0 = 263;
    y0 = 263;
    x1 = 275;
    y1 = 275;

    for(i32Count = 0; i32Count < 18; i32Count++)
    {
        setcolor(RED);// 设置画笔颜色
        rectangle(x0,y0,x1,y1);// 以"(x0,y0)"为起点,"(x1,y1)"为终点画矩形
        // 更改起、终点坐标
        x0 -= 5;
        y0 -= 5;
        x1 += 5;
        y1 += 5;
    }
    outtextxy(150,40,"How beautiful it is!"); 
    line(130,60,480,60);
    setcolor(BLUE);
    circle(269,269,137);
    getchar();
    return 0;  
}
