#define _CRT_SECURE_NO_WARNINGS 1
//��һ�����������в���һ����
//�۰���ҷ���ǰ�ᡪ�����򣡣�
#include<stdio.h>

int main()
{
	char arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//����Ԫ���±�   0 1 2 3 4 5 6 7 8 9
	int key = 7;//Ҫ���ҵ���
	//���ҹ����е��±��ʾ
	int left = 0;//����±�
	int right = sizeof(arr)/sizeof(arr[0])-1;//�Ҳ��±�
	int mid = 0; (left + right) / 2;//�м���������
	//���ҹ���
	do
	{
		mid = (left + right) / 2;//mid��ֵ����ѭ���б仯��
		if (arr[mid] == key)
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
		else if (arr[mid] > key)//�Ǿ�Ҫ��arr[mid]�������
		{
			right = mid - 1;
		}
		else//arr[mid]<key,��Ҫ��arr[mid]���ұ���
		{
			left = mid + 1;
		}
	} while (left <= right);
	return 0;
}