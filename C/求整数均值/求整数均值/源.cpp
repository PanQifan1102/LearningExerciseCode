#define _CRT_SECURE_NO_WARNINGS 1
/*本题要求编写程序，计算4个整数的和与平均值。题目保证输入与输出均在整型范围内。*/

#include<stdio.h>

int main()
{
    int a = 1; int b = 2;
    int c = 3; int d = 4;
    //int sum = 0; int avg = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    int sum = a + b + c + d;
    float avg = sum / 4.0;
    printf("Sum = %d; Average = %.1f\n", sum, avg);
    return 0;
}