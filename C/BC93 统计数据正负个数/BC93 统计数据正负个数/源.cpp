#define _CRT_SECURE_NO_WARNINGS 1
/*描述
输入10个整数，分别统计输出正数、负数的个数。
输入描述：
输入10个整数（范围-231~231-1），用空格分隔。
输出描述：
两行，第一行正数个数，第二行负数个数，具体格式见样例。*/

#include <stdio.h>

#include <stdio.h>

int main()
{
    int a = 0;
    int pos = 0; int neg = 0;
    int i = 0;
    int arr[10] = { 0 };

    for (i = 0;i < 10;i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0;i < 10;i++)
    {
        arr[i] > 0 ? pos++ : neg++;
    }

    printf("positive:%d\nnegative:%d\n", pos, neg);
    return 0;
}