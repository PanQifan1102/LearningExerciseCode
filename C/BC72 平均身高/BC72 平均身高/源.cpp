/*描述
从键盘输入5个人的身高（米），求他们的平均身高（米）。

输入描述：
一行，连续输入5个身高（范围0.00~2.00），用空格分隔。
输出描述：
一行，输出平均身高，保留两位小数。*/
#include<stdio.h>;
//Program 1
int main()
{
    float hi = 0.0;
    float sum = 0.0;

    int i = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &hi);
        sum = sum + hi;
    }

    float avg = sum / 5;

    // 默认小数点后打印6位
    printf("%.2f\n", avg);

    return 0;
}

//Program 2
int main()
{
    float a = 0.00;float b = 0.00;float c = 0.00;
    float d = 0.00;float e = 0.00;float f = 0.00;
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    f = (a + b + c + d + e) / 5.00;
    printf("%.2f", f);
    return 0;
}