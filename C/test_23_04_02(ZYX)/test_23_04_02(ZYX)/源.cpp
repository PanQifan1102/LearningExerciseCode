#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    int i,m, k, cnt = 0;
    scanf("%d", &m);
    for (i = m - 1;i > 1;i--)
    {
        for (k = 2;k < i;k++)//�ж�С�ڵ����ǲ�������
        {
            if (i % k == 0)//����������ѭ��
            {
                break;
            }
        }
        if (k >= i)//��ӡ����Ӧ����
        {
            printf("%6d", i);      
            cnt++;              
        }
        if (cnt >= 10)//�жϹ�����ʮ������
        {
            break;
        }
    }
    return 0;
}