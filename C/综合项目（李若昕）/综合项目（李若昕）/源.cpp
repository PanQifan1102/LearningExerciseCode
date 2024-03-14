#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//1.��ƽ��ֵ
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = a + b;
	int ret = sum / 2;
	printf("%d\n", ret);
	return 0;
}

//2.�����ֵ
int get_max(int x,int y)
{
	int max = 0;
	if (x > y)
	{
		max = x;
	}
	else
	{
		max = y;
	}
	return max;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int max = get_max(a,b);
	printf("%d\n", max);
	return 0;
}

//3.�����۸�
//ĳ�ٻ���˾Ϊ�˴��������ù�����۵İ취��
//��1�� ��1000Ԫ�������ߣ����������Żݣ�
//��2�� ��2000Ԫ�������ߣ��������Żݣ�
//��3�� ��3000Ԫ�������ߣ����������Żݣ�
//��4�� ��5000Ԫ�������ߣ��������Żݡ� ��д�������빺����������㲢����Żݼۡ�
#include <iostream>
using namespace std;
int main()
{
	int x = 0;
	double b[10005];
	double c[10005];
    cin >> x;//�����ļ�<iostream>
    for (int i = 0;i < x;i++)
    {
        cin >> b[i];
    }
    for (int i = 0;i < x;i++)
    {
        if (b[i] >= 1000 && b[i] < 2000)
        {
            c[i] = b[i] * 0.95;
        }
        else if (b[i] >= 2000 && b[i] < 3000)
        {
            c[i] = b[i] * 0.9;
        }
        else if (b[i] >= 3000 && b[i] < 5000)
        {
            c[i] = b[i] * 0.85;
        }
        else if (b[i] >= 5000)
        {
            c[i] = b[i] * 0.8;
        }
		else if (b[i] < 1000)
		{
			c[i] = b[i];
		}
    }
    for (int i = 0;i < x;i++)
    {
        printf("%.1f\n", c[i]);
    }
	return 0;
}

//4.�ֶκ���
//     |-> 2x + 1  x < 0;
//f(x)=|->    0    x = 0;
//     |-> 3x - 1  x > 0;
int piecewise_function(int *pa)
{
	int A = *pa;
	int ret = 0;
	if (A < 0)
	{
		ret = 2 * A + 1;
	}
	else if (A == 0)
	{
		ret = 0;
	}
	else
	{
		ret = 3 * A - 1;
	}
	return ret;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int ret = piecewise_function(&a);
	printf("ret=%d\n", ret);
	return 0;
}

//5.��Ƥ��
int main()
{
	float h = 0;
	float H = 0;
	float sum = 0;
	int i = 0;
	int n = 0;
	scanf("%f%d", &h, &n);
	sum = h;
	H = h / 2;
	for (i = 2;i <= n;i++)
	{
		sum = sum + 2 * H;
		H /= 2;
	}
	printf("%.2f %.2f\n", sum, H);
	return 0;
}

//6.�������У������ͣ�
//��һ���������У�2/1, 3/2, 5/3, 8/5, 13/8, ����д�������������е�ǰn��֮�͡�
int main()
{
	int f1 = 0;
    double f2 = 1, f3 = 2, s = 0.0, t;
    scanf("%d", &f1);
    while (f1--)
    {
        s += (f3 / f2);
        t = f3;
        f3 = f2 + f3;
        f2 = t;
    }
    printf("%.6lf\n", s);
	return 0;
}

//7.����ֵ
int main()
{
	float n = 0;
    float sum = 0;
    for (n = 1;n < 100;n = n + 2)
    {
        sum = (1 / n - 1 / (n + 1)) + sum;
    }
    printf("%f", sum);
    return 0;
}

//8.Բ����
int main()
{
    double a;
    scanf("%lf", &a);
    int i = 1;
    double fen_zi = 1, fen_mu = 1;
    double jie_guo = 1, sum = 0, s = 0;
    while (a < jie_guo) {
        fen_zi *= i;
        fen_mu *= (2 * i + 1);
        jie_guo = fen_zi / fen_mu;
        sum += jie_guo;
        i += 1;
    }
    s = (sum + 1) * 2;
    printf("%.6f", s);
    return 0;
}

//9.����
/* �������� */

//10.��С��Լ������󹫱���
#include<math.h>
int main()
{
	int n, m;
	int a;
	double b;
	scanf("%d %d", &n, &m);
	b = (double)n * (double)m;//��n,m����Ϊdouble�ͷ�ֹ���
	while (a = n % m, a != 0)
	{
		n = m;
		m = a;
	}
	printf("%d %.0lf", m, b / m);

	return 0;
}

//11.��ӡ����
int main()
{
	while (1)//��һ��Ŀ�Ŀ��Դ�ӡ�������
	{
		int i = 0;
		int j = 0;
		int k = 0;
		int t = 0;
		int n = 0;
		int x = 0;
		scanf("%d", &n);//n�ĺ��������εĳ��Խ��ߵĳ���,���n����������,Ҳ����˵���������ŷ�ʱ�ĸ߶�
		x = (n + 1) / 2;//�������α߳�x�볤�Խ���n�Ķ�Ӧ��ϵ
		printf("������εı߳���:%d\n", x);
		for (i = 1;i <= n;i++)//��һ����ӡ���εĸ߶�
		{
			if (i <= x)//����ӡ��������ʱ,��ӡ�еĸ߶�i<=�߳�x
			{
				for (j = 1;j <= x - i;j++)//��ӡ���������еĿհ״�,���ո��ַ�
				{
					printf(" ");
				}
				for (k = 1;k <= 2 * i - 1;k++)//��ӡ���������пհ״������*�ַ�
				{
					printf("*");
				}
			}
			else
			{
				for (j = 1;j <= i - x;j++)//��ӡ���������пհ״�,���ո��ַ�
				{
					printf(" ");
				}
				for (k = 1;k <= n - 2 * (i - x);k++)//��ӡ���������пհ״������*�ַ�
				{
					printf("*");
				}
			}
			printf("\n");//ÿѭ��һ�Σ��൱�ڴ�ӡ��һ�У��߶�����1.
		}
		printf("\n");//ÿ��ӡһ������,����һ��.
	}
	return 0;
}

//12.ˮ�ɻ���
//һ��nλ��������λ���ֵ�n�η�֮�͵��ڸ�������
//���磺153 = 1^3 + 5^3 + 3^3
int main()
{
	printf("��λ���е�ˮ�ɻ���:>\n");
	int i = 0; 
	int a = 0;
	int b = 0;
	int c = 0;
    for (i = 100; i <= 999; i++) //�����λ��������
	{
		//�ֱ��������λ������
		int a = i % 10;//��λ����
		int b = (i / 10) % 10;//ʮλ����
		int c = i / 100;//��λ����
		 //�ж��Ƿ���ˮ�ɻ���
		if (i == a * a * a + b * b * b + c * c * c)
		{
			printf("%d ", i);
		}
	}

	return 0;
}

//13.�����ж�
int main()
{
	int i = 0;
	int a = 0;
	printf("�����������жϵ�����:");
	scanf("%d", &a);
	for (i = 2;i <= a-1;i++)//��һ������n����2��(n-1)�������һ�����������Ǹ�����n��������
	{
		if (a % i == 0)
		{
			break;
		}
	}
	if (i >= a)//�ж�i�ǲ�����2��(n-1)֮��
	{
		//����2��(n-1)֮����������
		printf("������:>\n");
	}
	else
	{
		//��2��(n-1)֮����������
		printf("��������:<\n");
	}
	return 0;
}

//14.�ַ�ͳ��
/* �������� */

//15.���ִ����
//��s=a+aa+aaa+aaaa+aa��a��ֵ������a��һ��1~9�����֡�����2+22+222+2222+22222(��ʱ����5�������)��
int main()
{
    int a, n, b = 0, c = 0, i;
    while (scanf("%d%d", &a, &n) != EOF)
    {
        for (i = 0;i < n;i++)
        {
            b = b * 10 + a;
            c = c + b;
        }
        printf("%d\n", c);b = c = 0;
    }
    return 0;
}