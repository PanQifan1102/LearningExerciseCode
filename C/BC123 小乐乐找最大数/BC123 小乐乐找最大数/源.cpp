/*����
С���ֻ��4������������������ҵ���������
����������
һ�У�4���������ÿո�ֿ���
���������
һ�У�һ��������Ϊ�����4������������������*/

#include <stdio.h>

int main()
{
    int a = 0; int b = 0;
    int c = 0; int d = 0;
    int num1 = 0; int num2 = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b)
    {
        num1 = a;
    }
    else
    {
        num1 = b;
    }
    if (c > d)
    {
        num2 = c;
    }
    else
    {
        num2 = d;
    }
    num1 > num2 ? printf("%d", num1) : printf("%d", num2);
}