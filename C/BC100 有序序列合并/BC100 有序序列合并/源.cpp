#define _CRT_SECURE_NO_WARNINGS 1
//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//数据范围： 1 \le n, m \le 1000 \1≤n, m≤1000
//序列中的值满足 0 \le val \le 30000 \0≤val≤30000
#include<stdio.h>
int main()
{
    int n = 0;
    int m = 0;

    scanf("%d %d\n", &n, &m);
    int i = 0; int j = 0; int arr[2000] = {0};
    int tmp = 0;
    for (i = 0; i < n; i++)//1
    {
        scanf("%d ", &arr[i]);
    }
    for (i = n; i < n + m; i++)//2
    {
        scanf("%d ", &arr[i]);
    }
    for (i = 0; i < n + m; i++)//3
    {
        for (j = 0; j < n + m - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", arr[i]);
    }
}
