/*����
�Ӽ�������5���˵���ߣ��ף��������ǵ�ƽ����ߣ��ף���

����������
һ�У���������5����ߣ���Χ0.00~2.00�����ÿո�ָ���
���������
һ�У����ƽ����ߣ�������λС����*/
#include<stdio.h>;
//Program 1
int main()
{
    float hi = 0.0;
    float sum = 0.0;

    int i = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &hi);
        sum = sum + hi;
    }

    float avg = sum / 5;

    // Ĭ��С������ӡ6λ
    printf("%.2f\n", avg);

    return 0;
}

//Program 2
int main()
{
    float a = 0.00;float b = 0.00;float c = 0.00;
    float d = 0.00;float e = 0.00;float f = 0.00;
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    f = (a + b + c + d + e) / 5.00;
    printf("%.2f", f);
    return 0;
}