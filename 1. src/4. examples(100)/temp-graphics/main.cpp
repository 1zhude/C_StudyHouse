/********************************************************************
* 项目名称： 一个C语言的用例--此用例尚且不可用（由于某函数不在函数库中）
* 项目功能： 一个最优美的图案.
* 项目时间： 2021-11-13
* 项目作者： ZZD
********************************************************************/
#include "math.h"
#include <stdio.h>
#include "graphics.h"
#include "dos.h"
#include "conio.h"
#include "stdlib.h"
#include "stdarg.h"
// **********************宏定义声明*********************************
#define MAXPTS 15
#define PI 3.1415926
// **********************全局变量声明*********************************
struct PTS {
    int x,y;
};
double AspectRatio=0.85;
// **********************函数声明*********************************
void LineToDemo(void);
// ================================================================
// 函数名称：main
// 函数功能：一个最优美的图案.
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块： 
// ================================================================
int main(int arg,char *argv[]) 
{
    int i32Drive = 0;
    int i32Mode  = 0;
    int top = 50, left = 20, right = 50;

    // 初始化图形系统
    i32Drive = CGA;
    i32Mode  = CGAC0;
    initgraph(&i32Drive, &i32Mode, "");
    setcolor(YELLOW);
    setbkcolor(GREEN);
    LineToDemo();// 调用画图函数
    getchar();
    return 0;  
}
// ================================================================
// 函数名称：LineToDemo
// 函数功能：一个最优美的图案.
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块： 
// ================================================================
void LineToDemo(void)
{
    struct viewporttype vp;
    struct PTS points[MAXPTS];
    int i, j, h, w, xcenter, ycenter;
    int radius, angle, step;
    double rads;
    printf(" MoveTo / LineTo Demonstration" );
    // getviewsettings( &vp );
    h = vp.bottom - vp.top;
    w = vp.right - vp.left;
    xcenter = w / 2; /* Determine the center of circle */
    ycenter = h / 2;
    radius = (h - 30) / (AspectRatio * 2);
    step = 360 / MAXPTS; /* Determine # of increments */
    angle = 0; /* Begin at zero degrees */
    for( i=0 ; i<MAXPTS ; ++i ){ /* Determine circle intercepts */
        rads = (double)angle * PI / 180.0; /* Convert angle to radians */
        points[i].x = xcenter + (int)( cos(rads) * radius );
        points[i].y = ycenter - (int)( sin(rads) * radius * AspectRatio );
        angle += step; /* Move to next increment */
    }
    circle( xcenter, ycenter, radius ); /* Draw bounding circle */
    for( i=0 ; i<MAXPTS ; ++i ){ /* Draw the cords to the circle */
        for( j=i ; j<MAXPTS ; ++j ){ /* For each remaining intersect */
            moveto(points[i].x, points[i].y); /* Move to beginning of cord */
            lineto(points[j].x, points[j].y); /* Draw the cord */
        }
    }
}