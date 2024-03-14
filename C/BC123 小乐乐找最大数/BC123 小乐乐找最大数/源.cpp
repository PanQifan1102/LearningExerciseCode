/*描述
小乐乐获得4个最大数，请帮他编程找到最大的数。
输入描述：
一行，4个整数，用空格分开。
输出描述：
一行，一个整数，为输入的4个整数中最大的整数。*/

#include <stdio.h>

int main()
{
    int a = 0; int b = 0;
    int c = 0; int d = 0;
    int num1 = 0; int num2 = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b)
    {
        num1 = a;
    }
    else
    {
        num1 = b;
    }
    if (c > d)
    {
        num2 = c;
    }
    else
    {
        num2 = d;
    }
    num1 > num2 ? printf("%d", num1) : printf("%d", num2);
}