#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&amp; gd, &amp; gm, "");

    // ���Ƶ���ĵײ�
    setcolor(YELLOW);
    pieslice(250, 250, 0, 360, 200);

    // ���Ƶ�����ϲ�
    setcolor(RED);
    pieslice(250, 250, 45, 135, 150);
    pieslice(250, 250, 225, 315, 150);

    // ���Ƶ����ϵ�װ��
    setcolor(BLUE);
    circle(200, 200, 50);
    circle(300, 200, 50);

    // �ڵ�����д��
    setcolor(BLACK);
    outtextxy(250, 250, "Happy Birthday!");

    getch();
    closegraph();
    return 0;
}
