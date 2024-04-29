#include<iostream>
using namespace std;

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


void total()
{
	int i = 0;
	char num[36] = { 0 };
	char ch = 0;
	for (i = 0; i < 36; i++)
	{
		num[i] = 0;// 初始化
	}

	while ((ch = getchar()) != '#') //‘#’表示输入字符串结束。
	{
		if ('0' <= ch && ch <= '9')
		{
			i = ch - 48; num[i]++;
		}
		else if ('A' <= ch <= 'Z')
		{
			i = ch - 65 + 10; num[i]++; // 字母字符
		}
	}

	for (i = 0; i < 10; i++) // 输出数字字符的个数
	{
		cout << "数字" << i << "的个数 = " << num[i] << endl;
	}
	for (i = 10; i < 36; i++)// 求出字母字符的个数
	{
		cout << "字母字符" << i + 55 << "的个数 =" << num[i] << endl;
	}
}


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

bool judge_ele(int *a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			//同行的元素进行比较
			for (int p = j + 1; p < n; p++)
			{
				//有一个相同，就返回no
				if (a[i][j] == a[i][p])
				{
					cout << "no" << endl;
					return false;
				}
			}
			//和下一行以后的元素进行比较
			for (int k = i + 1; k < m; k++)
			{
				for (int p = 0; p < n; p++)
				{
					if (a[i][j] == a[k][p])
					{
						cout << "no" << endl;
						return false;
					}
				}

			}
		}
	}
	//如果都不相同，就返回yes
	cout << "yes" << endl;
	return true;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void solution(int A[], int n)
	
{
	int i = 0;
	int j = n - 1;
	int x = 0; 
	//双指针解决
	while (i < j)
	{
		//正向->
		while (i < j && A[i]>0)
		{
			i++;
		}
		//<-逆向
		while (i < j && A[j] < 0)
		{
			j--;
		}
		//负数往后交换
		if (i < j) 
		{
			swap(A[i], A[j]);
		}
	}
}