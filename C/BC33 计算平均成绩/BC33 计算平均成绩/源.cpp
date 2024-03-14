/*描述
从键盘输入5个学生的成绩（整数），求他们的平均成绩（浮点数，保留一位小数）。

输入描述：
一行，连续输入5个整数（范围0~100），用空格分隔。
输出描述：
一行，输出5个数的平均数（保留一位小数）。*/

#include <stdio.h>

int main() {
    int a = 0; int sum = 0;
    while (scanf("%d", &a) != EOF)
    {
        sum += a;
    }
    printf("%.1f\n", sum / 5.0);
    return 0;
}