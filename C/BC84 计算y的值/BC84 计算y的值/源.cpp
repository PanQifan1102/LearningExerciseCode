/*����
��֪һ������y = f(x)����x < 0ʱ��y = 1����x = 0ʱ��y = 0����x > 0ʱ��y = -1��

����������
һ�У�����һ������x���� - 10000 < x < 10000��
	���������
	һ�У����y��ֵ��*/

#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    scanf("%d", &x);
    if (x < 0)
    {
        y = 1;
    }
    else if (x == 0)
    {
        y = 0;
    }
    else
    {
        y = -1;
    }
    printf("%d\n", y);
    return 0;
}