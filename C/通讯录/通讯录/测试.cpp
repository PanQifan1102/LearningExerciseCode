#define _CRT_SECURE_NO_WARNINGS 1
#include"ͨѶ¼.h"

void menu()
{
	printf("***********************************");
	printf("******** 1.add     2.del **********");
	printf("******** 3.search  4.modity *******");
	printf("******** 5.sort    6.print ********");
	printf("************* 0.exit  *************");
	printf("***********************************");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

int main()
{
	int input = 0;
	//����ͨѶ¼
	Contact con;//ͨѶ¼
	//��ʼ��ͨѶ¼
	//��data����һ�������Ŀռ��ڶ�����
	//sz = 0��
	//capacity��ʼ��Ϊ��ǰ���������
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		//����
		case ADD:
			AddContact(&con);
			break;			
		//ɾ��
		case DEL:
			DelContact(&con);
			break;
		//��ѯ
		case SEARCH:
			SearchContact(&con);
			break;
		//�޸�
		case MODIFY:
			ModifyContact(&con);
			break;
		//����
		case SORT:
			/* ���������С��� */
			break;
		//��ӡ
		case PRINT:
			PrintContact(&con);
			break;
		//�˳�
		case EXIT:
			//������Ϣ���ļ�
			SaveContact(&con);
			//����ͨѶ¼
			DestoryContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	}
	while (input);
	return 0;
}