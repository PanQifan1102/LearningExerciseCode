/*����
����n���ɼ����������n���ɼ�����߷�������ͷ����Ĳ
����������
���У���һ��Ϊn����ʾn���ɼ����������10000��

�ڶ���Ϊn���ɼ���������ʾ����Χ0~100�����Կո������
���������
һ�У����n���ɼ�����߷�������ͷ����Ĳ*/

#include <stdio.h>

int main()
{
    int number = 0;
    int m = 0;
    int max = 0;
    int min = 100;
    scanf("%d", &number);

    for (int i = 0;i < number;i++)
    {
        scanf("%d", &m);
        if (m > max)
        {
            max = m;
        }
        if (m < min)
        {
            min = m;
        }

    }

    printf("%d", max - min);
    return 0;
}