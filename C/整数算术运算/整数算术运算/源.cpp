#define _CRT_SECURE_NO_WARNINGS 1
//����Ҫ���д���򣬼��㲢���2���������ĺ͡����������������
//��Ŀ��֤��������ȫ�������ͷ�Χ�ڡ�

#include<stdio.h>

int main()
{
    int a = 0; int b = 0;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
    return 0;
}