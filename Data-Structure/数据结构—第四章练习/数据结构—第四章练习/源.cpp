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
		num[i] = 0;// ��ʼ��
	}

	while ((ch = getchar()) != '#') //��#����ʾ�����ַ���������
	{
		if ('0' <= ch && ch <= '9')
		{
			i = ch - 48; num[i]++;
		}
		else if ('A' <= ch <= 'Z')
		{
			i = ch - 65 + 10; num[i]++; // ��ĸ�ַ�
		}
	}

	for (i = 0; i < 10; i++) // ��������ַ��ĸ���
	{
		cout << "����" << i << "�ĸ��� = " << num[i] << endl;
	}
	for (i = 10; i < 36; i++)// �����ĸ�ַ��ĸ���
	{
		cout << "��ĸ�ַ�" << i + 55 << "�ĸ��� =" << num[i] << endl;
	}
}


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

bool judge_ele(int *a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			//ͬ�е�Ԫ�ؽ��бȽ�
			for (int p = j + 1; p < n; p++)
			{
				//��һ����ͬ���ͷ���no
				if (a[i][j] == a[i][p])
				{
					cout << "no" << endl;
					return false;
				}
			}
			//����һ���Ժ��Ԫ�ؽ��бȽ�
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
	//���������ͬ���ͷ���yes
	cout << "yes" << endl;
	return true;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void solution(int A[], int n)
	
{
	int i = 0;
	int j = n - 1;
	int x = 0; 
	//˫ָ����
	while (i < j)
	{
		//����->
		while (i < j && A[i]>0)
		{
			i++;
		}
		//<-����
		while (i < j && A[j] < 0)
		{
			j--;
		}
		//�������󽻻�
		if (i < j) 
		{
			swap(A[i], A[j]);
		}
	}
}