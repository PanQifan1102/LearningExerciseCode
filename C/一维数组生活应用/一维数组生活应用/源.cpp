#define _CRT_SECURE_NO_WARNINGS 1
//�������ĩ������6��ѧ���ɼ�����һά�����У�
//��������м����ѧ���ɼ�����ͳ�Ƽ���������
#include<stdio.h>
int main()
{
    int a[6] = { 0 };
    scanf("%d %d %d %d %d %d ",
        &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);
    int count = 0;
    for (int i = 0;i < 6;i++)
    {
        if (a[i] > 60)
        {
            printf("%5d", a[i]);
            count++;
        }
    }
    printf("\n");
    printf("count=%d", count);
}