#define _CRT_SECURE_NO_WARNINGS 1
/*����
����10���������ֱ�ͳ����������������ĸ�����
����������
����10����������Χ-231~231-1�����ÿո�ָ���
���������
���У���һ�������������ڶ��и��������������ʽ��������*/

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