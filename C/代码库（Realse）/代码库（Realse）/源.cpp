#define _CRT_SECURE_NO_WARNINGS 1
//ʵ��һ��������������ָ���ַ�����ǿ�ƹػ����������ָ���ַ�����
//�����룬����60����Զ��ػ�
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr[10] = { 0 };
	system("shutdown -s -t 60");//����60���ػ�
	//���벿��
again:
	printf("���롰��������ȡ���Զ��ػ���");
	scanf("%s", &arr);//���������ַ���
	//�ж��ַ����Ƿ�Ϸ�
	if (strcmp(arr, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}