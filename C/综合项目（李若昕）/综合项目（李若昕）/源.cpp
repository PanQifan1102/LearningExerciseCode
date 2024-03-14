#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//1.求平均值
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

//2.求最大值
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

//3.促销价格
//某百货公司为了促销，采用购物打折的办法。
//（1） 在1000元或以上者，按九五折优惠；
//（2） 在2000元或以上者，按九折优惠；
//（3） 在3000元或以上者，按八五折优惠；
//（4） 在5000元或以上者，按八折优惠。 编写程序，输入购物款数，计算并输出优惠价。
#include <iostream>
using namespace std;
int main()
{
	int x = 0;
	double b[10005];
	double c[10005];
    cin >> x;//引用文件<iostream>
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

//4.分段函数
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

//5.拍皮球
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

//6.分数序列（求级数和）
//有一个分数序列：2/1, 3/2, 5/3, 8/5, 13/8, …编写程序求出这个序列的前n项之和。
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

//7.求级数值
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

//8.圆周率
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

//9.余弦
/* ………… */

//10.最小公约数和最大公倍数
#include<math.h>
int main()
{
	int n, m;
	int a;
	double b;
	scanf("%d %d", &n, &m);
	b = (double)n * (double)m;//将n,m定义为double型防止溢出
	while (a = n % m, a != 0)
	{
		n = m;
		m = a;
	}
	printf("%d %.0lf", m, b / m);

	return 0;
}

//11.打印菱形
int main()
{
	while (1)//这一步目的可以打印多次菱形
	{
		int i = 0;
		int j = 0;
		int k = 0;
		int t = 0;
		int n = 0;
		int x = 0;
		scanf("%d", &n);//n的含义是菱形的长对角线的长度,因此n必须是奇数,也可以说是菱形竖着放时的高度
		x = (n + 1) / 2;//这是菱形边长x与长对角线n的对应关系
		printf("这个菱形的边长是:%d\n", x);
		for (i = 1;i <= n;i++)//这一步打印菱形的高度
		{
			if (i <= x)//当打印上三角形时,打印中的高度i<=边长x
			{
				for (j = 1;j <= x - i;j++)//打印上三角形中的空白处,即空格字符
				{
					printf(" ");
				}
				for (k = 1;k <= 2 * i - 1;k++)//打印上三角形中空白处后面的*字符
				{
					printf("*");
				}
			}
			else
			{
				for (j = 1;j <= i - x;j++)//打印下三角形中空白处,即空格字符
				{
					printf(" ");
				}
				for (k = 1;k <= n - 2 * (i - x);k++)//打印下三角形中空白处后面的*字符
				{
					printf("*");
				}
			}
			printf("\n");//每循环一次，相当于打印了一行，高度增加1.
		}
		printf("\n");//每打印一个菱形,换行一次.
	}
	return 0;
}

//12.水仙花数
//一个n位正整数各位数字的n次方之和等于该正整数
//例如：153 = 1^3 + 5^3 + 3^3
int main()
{
	printf("三位数中的水仙花数:>\n");
	int i = 0; 
	int a = 0;
	int b = 0;
	int c = 0;
    for (i = 100; i <= 999; i++) //输出三位数的整数
	{
		//分别输出各个位的数字
		int a = i % 10;//个位数字
		int b = (i / 10) % 10;//十位数字
		int c = i / 100;//百位数字
		 //判断是否是水仙花数
		if (i == a * a * a + b * b * b + c * c * c)
		{
			printf("%d ", i);
		}
	}

	return 0;
}

//13.素数判定
int main()
{
	int i = 0;
	int a = 0;
	printf("请输入你想判断的整数:");
	scanf("%d", &a);
	for (i = 2;i <= a-1;i++)//若一个整数n不被2至(n-1)间的任意一个数整除，那该数字n则是素数
	{
		if (a % i == 0)
		{
			break;
		}
	}
	if (i >= a)//判断i是不是在2至(n-1)之间
	{
		//不在2至(n-1)之间则是素数
		printf("是素数:>\n");
	}
	else
	{
		//在2至(n-1)之间则不是素数
		printf("不是素数:<\n");
	}
	return 0;
}

//14.字符统计
/* ………… */

//15.数字串求和
//求s=a+aa+aaa+aaaa+aa…a的值，其中a是一个1~9的数字。例如2+22+222+2222+22222(此时共有5个数相加)。
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