#define _CRT_SECURE_NO_WARNINGS 1
/*����Ҫ���д���򣬼���4�������ĺ���ƽ��ֵ����Ŀ��֤����������������ͷ�Χ�ڡ�*/

#include<stdio.h>

int main()
{
    int a = 1; int b = 2;
    int c = 3; int d = 4;
    //int sum = 0; int avg = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    int sum = a + b + c + d;
    float avg = sum / 4.0;
    printf("Sum = %d; Average = %.1f\n", sum, avg);
    return 0;
}