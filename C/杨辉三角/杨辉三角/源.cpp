#define _CRT_SECURE_NO_WARNINGS 1
//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//……
#include <stdio.h>
#define N 14

int main()
{
    int i, j, k, n = 0, a[N][N];
    scanf("%d", &n);
    for (i = 1;i <= n + 1;i++)
        a[i][1] = a[i][i] = 1;
    for (i = 3;i <= n + 1;i++)
        for (j = 2;j <= i - 1;j++)
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    for (i = 1;i <= n + 1;i++)
    {
        for (k = 1;k <= n + 1 - i;k++)
            printf("  ");
        for (j = 1;j <= i;j++)
            printf("%4d", a[i][j]);

        printf("\n");
    }
}