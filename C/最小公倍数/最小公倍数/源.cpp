#define _CRT_SECURE_NO_WARNINGS 1
//���д��������������������С��������
//�����ӿڶ��壺
//int Lcm(int x, int y);
//˵�������� x �� y ������������������������������͸�������������ֵΪ��С��������
//Ҫ�󣺹涨��С������Ϊ�Ǹ��������� x �� y ����һ��Ϊ 0 ʱ����С�������涨Ϊ 0��
//�������и���ʱ���Ƚ��о���ֵ����������С������
int Lcm(int x, int y)
{
    //���ű仯
    if (x == 0 || y == 0)
    {
        return 0;
    }
    else if (x < 0 || y>0)
    {
        x = -x;
    }
    else if (x > 0 || y < 0)
    {
        y = -y;
    }
    else if (x < 0 && y < 0)
    {
        x = -x;
        y = -y;
    }
    int temp;
    if (x < y)
    {
        temp = y;
        y = x;
        x = temp;
    }
    int n = x;
    for (n; n > 0; ++n)
    {
        if ((n % x == 0) && (n % y == 0)) {
            return n;
        }
    }
    return -1;

}