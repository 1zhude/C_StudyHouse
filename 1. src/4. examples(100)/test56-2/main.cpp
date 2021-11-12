#include <stdio.h>
#include <graphics.h>
int main(void*arg,char *argv[]) 
{
    int i32Count   = 0; // 计数变量
    int i32gDriver = 0;// 图像系统驱动变量
    int i32gMode   = 0;// 图像显示模式
    float Radius   = 1;
    float TempRadius   = 1;

    // 设置图形初始化参数
    i32gDriver = VGA;
    i32gMode   = VGAHI;

    initgraph(&i32gDriver, &i32gMode,"");// 初始化图形系统
    setbkcolor(RED);// 设置填充色为黄色

    for(i32Count = 0; i32Count < 25; i32Count++)
    {
        setcolor(YELLOW);// 设置画笔颜色
        circle(310,250,Radius);// 以"Radius"为半径,"x=310""y=310"为圆心画圆
        // 更改圆半径
        Radius = Radius + TempRadius;
        TempRadius += 1.0;
    }
    getchar();
    return 0;  
}
