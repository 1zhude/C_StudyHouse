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
#define LEFT 0
#define TOP 0
#define RIGHT 639
#define BOTTOM 479
#define LINES 400
#define MAXCOLOR 15
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
    int driver,mode,error;
    int x1,y1;
    int x2,y2;
    int dx1,dy1,dx2,dy2,i=1;
    int count=0;
    int color=0;

    driver=VGA;
    mode=VGAHI;
    initgraph(&driver,&mode,"");

    x1=y1=10;
    x2=y2=200;
    dx1=dy1=2;
    dx2=dy2=3;

    while(!kbhit())
    {
        setcolor(RED);
        line(x1,y1,x2,y2);
        x1+=dx1;y1+=dy1;
        x2+=dx2;y2+dy2;
        if(x1<=LEFT||x1>=RIGHT)
            dx1=-dx1;
        if(y1<=TOP||y1>=BOTTOM)
            dy1=-dy1;
        if(x2<=LEFT||x2>=RIGHT)
            dx2=-dx2;
        if(y2<=TOP||y2>=BOTTOM)
                dy2=-dy2;
        if(++count>LINES)
        {
            setcolor(color);
            color=(color>=MAXCOLOR)?0:++color;
        }
    }
    closegraph();

    return 0;  
}

