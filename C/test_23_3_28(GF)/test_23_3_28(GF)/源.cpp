#define _CRT_SECURE_NO_WARNINGS 1
//��һ�����������в���һ����
//�۰���ҷ���ǰ�ᡪ�����򣡣�
#include<stdio.h>
#include<windows.h>//ʹ��system("cls")��������Ҫ��ͷ�ļ�
int main()
{
	//1. ���ݵ����룬Ҫ��Ӵ�С������������
	int arr[15] = { 0 };
	int i = 0;
	int count = 0;//���Ӽ������ܣ�����鿴������ǵڼ�����
	printf("���ɴ�С������������\n");
	//1.1 ������������
	for (i = 0,count = 1;i < 15;i++,count++)
	{
		printf("�������%d�����֣�", count);
		scanf("%d", &arr[i]);
	}
	system("cls");//ʹ��windows�⺯���������������ݺ������Ļ��
	                              //ʹ��ʱ��Ҫ����ͷ�ļ�<windows.h>
	
     //2. ���Ҵ����ʵ��
	printf("��������Ҫ���ҵ�����");
	int key = 0;//Ҫ���ҵ���
	scanf("%d", &key);
	//2.1 ���ҹ����е��±��ʾ
	int left = 0;//����±�
	int right = sizeof(arr) / sizeof(arr[0]) - 1; //�Ҳ��±�
	int mid = 0;//�м���������
	//2.2 ���ҹ���
	do
	{
		mid = (left + right) / 2;//mid��ֵ����ѭ���б仯��
		if (arr[mid] == key)
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
		else if (arr[mid] < key)//�Ǿ�Ҫ��arr[mid]�������
		{
			right = mid - 1;
		}
		else //arr[mid]>key,��Ҫ��arr[mid]���ұ���
		{
			left = mid + 1;
		}
	} while (left <= right);
	printf("�޴�����");

	return 0;
}