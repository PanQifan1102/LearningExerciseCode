#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&amp; gd, &amp; gm, "");

    // 绘制蛋糕的底部
    setcolor(YELLOW);
    pieslice(250, 250, 0, 360, 200);

    // 绘制蛋糕的上部
    setcolor(RED);
    pieslice(250, 250, 45, 135, 150);
    pieslice(250, 250, 225, 315, 150);

    // 绘制蛋糕上的装饰
    setcolor(BLUE);
    circle(200, 200, 50);
    circle(300, 200, 50);

    // 在蛋糕上写字
    setcolor(BLACK);
    outtextxy(250, 250, "Happy Birthday!");

    getch();
    closegraph();
    return 0;
}
