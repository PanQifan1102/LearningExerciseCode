#define _CRT_SECURE_NO_WARNINGS 1
//给定不超过6的正整数A，考虑从A开始的连续4个数字。
//请输出所有由它们组成的无重复数字的3位数。
//输入格式：
//输入在一行中给出A。
//输出格式：
//输出满足条件的的3位数，要求从小到大，每行6个整数。
//整数间以空格分隔，但行末不能有多余空格。

#include<stdio.h>
int main()
{
    int a = 0;
    int sum = 0;
    int count = 0;
    int i = 0, j = 0, k = 0;
    scanf("%d", &a);
    for (i = a;i <= a + 3;i++) {
        for (j = a;j <= a + 3;j++) {
            for (k = a;k <= a + 3;k++) {
                if (i != j && j != k && i != k) {
                    sum = i * 100 + j * 10 + k;
                    count++;
                    if (count % 6 == 0) {
                        printf("%d\n", sum);
                        count = 0;
                    }
                    else
                        printf("%d ", sum);
                }
            }
        }
    }
    return 0;
}