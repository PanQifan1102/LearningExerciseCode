#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//���������߼�
void test1()//˳���β�����
{
	SL s;
	s.a = NULL;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushBack(&s, 5);
	SLPushBack(&s, 6);
	SLPushBack(&s, 7);

	SLPrint(&s);

	SLDestroy(&s);
}
void test2()//˳���ͷ�����
{
	SL s;
	s.a = NULL;
	SLInit(&s);
	SLPushFront(&s, 1);
	SLPushFront(&s, 2);
	SLPushFront(&s, 3);
	SLPushFront(&s, 4);
	SLPushFront(&s, 5);
	SLPushFront(&s, 6);
	SLPushFront(&s, 7);

	SLPrint(&s);

	SLDestroy(&s);
}
int main()
{
	test2();
	return 0;
}