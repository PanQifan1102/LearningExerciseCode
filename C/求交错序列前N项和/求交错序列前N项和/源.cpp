#define _CRT_SECURE_NO_WARNINGS 1
//本题要求编写程序，计算交错序列 1 - 2 / 3 + 3 / 5 - 4 / 7 + 5 / 9 - 6 / 11 + ... 的前N项之和。
//输入格式 :
//输入在一行中给出一个正整数N。
//输出格式 :
//在一行中输出部分和的值，结果保留三位小数。
//输入样例 :
//5
//输出样例 :
//0.917
#include <stdio.h>

int main(void) {

    float a, b, n, flag;

    double sum;

    a = 1.0;b = 1.0;flag = 1.0;

    sum = 0;

    scanf("%f", &n);

    for (int i = 1;i <= n;i++) {

        sum = sum + flag * (a / b);

        a = a + 1;

        b = b + 2;

        flag = -flag;

    }

    printf("%.3lf", sum);

}