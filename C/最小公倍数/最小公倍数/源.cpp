#define _CRT_SECURE_NO_WARNINGS 1
//请编写函数，求两个整数的最小公倍数。
//函数接口定义：
//int Lcm(int x, int y);
//说明：参数 x 和 y 是两个任意整数（包括正整数、零和负整数），函数值为最小公倍数。
//要求：规定最小公倍数为非负整数。当 x 和 y 中有一个为 0 时，最小公倍数规定为 0。
//当其中有负数时，先进行绝对值，后再求最小公倍数
int Lcm(int x, int y)
{
    //符号变化
    if (x == 0 || y == 0)
    {
        return 0;
    }
    else if (x < 0 || y>0)
    {
        x = -x;
    }
    else if (x > 0 || y < 0)
    {
        y = -y;
    }
    else if (x < 0 && y < 0)
    {
        x = -x;
        y = -y;
    }
    int temp;
    if (x < y)
    {
        temp = y;
        y = x;
        x = temp;
    }
    int n = x;
    for (n; n > 0; ++n)
    {
        if ((n % x == 0) && (n % y == 0)) {
            return n;
        }
    }
    return -1;

}