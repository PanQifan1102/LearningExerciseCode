#define _CRT_SECURE_NO_WARNINGS 1
//����������6��������A�����Ǵ�A��ʼ������4�����֡�
//�����������������ɵ����ظ����ֵ�3λ����
//�����ʽ��
//������һ���и���A��
//�����ʽ��
//������������ĵ�3λ����Ҫ���С����ÿ��6��������
//�������Կո�ָ�������ĩ�����ж���ո�

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