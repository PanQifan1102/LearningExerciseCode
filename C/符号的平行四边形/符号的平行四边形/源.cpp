#define _CRT_SECURE_NO_WARNINGS 1
//����ĿҪ������һ������c��һ��1 - 20������m
//��һ��1 - 50������n�����m��n��c���ŵ�ƽ���ıߡ�
#include<stdio.h>
int main()
{
    int m = 0;//��
    int n = 0;//��
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