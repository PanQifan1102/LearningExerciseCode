#define _CRT_SECURE_NO_WARNINGS 1
//本题要求编写程序，计算并输出2个正整数的和、差、积、商与余数。
//题目保证输入和输出全部在整型范围内。

#include<stdio.h>

int main()
{
    int a = 0; int b = 0;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
    return 0;
}