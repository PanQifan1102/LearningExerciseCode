#define _CRT_SECURE_NO_WARNINGS 1
//����Ҫ���д���򣬼��㽻������ 1 - 2 / 3 + 3 / 5 - 4 / 7 + 5 / 9 - 6 / 11 + ... ��ǰN��֮�͡�
//�����ʽ :
//������һ���и���һ��������N��
//�����ʽ :
//��һ����������ֺ͵�ֵ�����������λС����
//�������� :
//5
//������� :
//0.917
#include <stdio.h>

int main(void) {

    float a, b, n, flag;

    double sum;

    a = 1.0;b = 1.0;flag = 1.0;

    sum = 0;

    scanf("%f", &n);

    for (int i = 1;i <= n;i++) {

        sum = sum + flag * (a / b);

        a = a + 1;

        b = b + 2;

        flag = -flag;

    }

    printf("%.3lf", sum);

}