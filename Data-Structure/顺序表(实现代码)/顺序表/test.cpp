#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void TestSeqList1()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushBack(&s, 5);
	SLPushBack(&s, 6);
	SLPushBack(&s, 6);
	SLPushBack(&s, 6);
	SLPushBack(&s, 6);
	SLPrint(&s);

	SLDestroy(&s);
}

void TestSeqList2()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushFront(&s, 5);
	SLPushFront(&s, 6);
	SLPushFront(&s, 6);
	SLPushFront(&s, 7);
	SLPushFront(&s, 6);
	SLPrint(&s);

	SLDestroy(&s);
}

void TestSeqList3()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushFront(&s, 5);
	SLPushFront(&s, 6);
	SLPrint(&s);

	SLPopBack(&s);
	SLPopBack(&s);
	SLPrint(&s);

	SLPopBack(&s);
	SLPopBack(&s);
	SLPrint(&s);

	SLPopBack(&s);
	SLPopBack(&s);
	//SLPopBack(&s);
	SLPrint(&s);

	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPrint(&s);

	SLDestroy(&s);
}

void TestSeqList4()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPrint(&s);

	SLPopFront(&s);
	SLPopFront(&s);
	SLPrint(&s);

	SLPopFront(&s);
	SLPopFront(&s);
	SLPrint(&s);

	//SLPopFront(&s);
	//SLPopFront(&s);
	//SLPrint(&s);

	SLDestroy(&s);
}

void TestSeqList5()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushBack(&s, 5);
	SLPushBack(&s, 6);
	SLPrint(&s);

	SLInsert(&s, 2, 30);
	SLPrint(&s);

	//SLInsert(&s, 20, 30);
	//SLPrint(&s);

	//SLInsert(&s, -20, 30);
	//SLPrint(&s);

	SLErase(&s, 3);
	SLPrint(&s);

	SLPopFront(&s);
	SLPrint(&s);

	SLPopBack(&s);
	SLPrint(&s);

	SLDestroy(&s);
}

void TestSeqList6()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushBack(&s, 5);
	SLPushBack(&s, 6);
	SLPrint(&s);

	int pos = SLFind(&s, 6);
	if (pos != -1)
	{
		SLErase(&s, pos);
	}
	SLPrint(&s);

	SLDestroy(&s);
}

void TestSeqList7()
{
	//SL* s = NULL;
	//SLPushBack(s, 1);
	//SLPushBack(s, 2);
	//SLPushBack(s, 3);
	//SLPrint(s);

	//SLDestroy(s);
}

void menu()
{
	printf("***************************************\n");
	printf("1��β������  2��βɾ����\n");
	printf("3��ͷ������  4��ͷɾ����\n");
	printf("5����ӡ����  -1���˳�\n");
	printf("***************************************\n");
}

int main()
{
	int option = 0;
	SL s;
	SLInit(&s);
	while (option != -1)
	{
		menu();
		printf("��������Ĳ���:>");
		scanf("%d", &option);
		if (option == 1)
		{
			/*printf("������Ҫβ������ݣ���-1����:");
			int x = 0;
			scanf("%d", &x);
			while (x != -1)
			{
				SLPushBack(&s, x);
				scanf("%d", &x);
			}*/

			int n = 0;
			printf("������Ҫβ������ݸ���������������Ҫ���������:");
			scanf("%d", &n);

			int x = 0;
			while (n > 0)
			{
				scanf("%d", &x);
				SLPushBack(&s, x);
				n--;
			}
		}
		else if (option == 5)
		{
			SLPrint(&s);
		}
		else if (option == -1)
		{
			break;
		}
		else
		{
			printf("�޴�ѡ��,����������\n");
		}
	}

	SLDestroy(&s);

	return 0;
}