#define _CRT_SECURE_NO_WARNINGS 1
/*����һ�������¶�F������Ҫ���д���򣬼����Ӧ�������¶�C��
���㹫ʽ��C=5��(F?32)/9����Ŀ��֤����������������ͷ�Χ�ڡ�*/
#include<stdio.h>

int main()
{
    int F = 0;
    int C = 0;
    scanf("%d", &F);
    C = 5 * (F - 32) / 9;
    printf("Celsius = %d\n", C);
    return 0;
}