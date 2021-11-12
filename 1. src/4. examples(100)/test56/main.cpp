#include <stdio.h>
#include <graphics.h>
int main(void*arg,char *argv[]) 
{
    int i32Count   = 0; // 计数变量
    int i32gDriver = 0;// 图像系统驱动变量
    int i32gMode   = 0;// 图像显示模式
    float x0,y0,x1,y1;  
    float TempRadius   = 1;

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
        line(0,0,1200,900);// 以"(x0,y0)"为起点,"(x1,y1)"为终点画直线
        // // 更改起、终点坐标
        // x0 -= 5;
        // y0 -= 10;
        // x1 += 5;
        // y1 += 20;
    }
    getchar();
    return 0;  
}
