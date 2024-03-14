#define _CRT_SECURE_NO_WARNINGS 1
//本题目要求输入一个符号c、一个1 - 20的整数m
//和一个1 - 50的整数n，输出m行n列c符号的平行四边。
#include<stdio.h>
int main()
{
    int m = 0;//行
    int n = 0;//列
    char c = 0;
    scanf("%c %d %d", &c, &m, &n);
    for (int i = 0;i < m;i++)
    {
        for (int j = 0;j < (m - i - 1);j++)
        {
            printf(" ");
        }
        for (int k = 0;k < n;k++)
        {
            printf("%c", c);
        }
        if (i == (m - 1))
        {
            break;
        }
        printf("\n");
    }
    return 0;
}