#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"
//˫�������һ���ڵ�
LTNode* BuyLTNode(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}
//˫�����β��
void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	//LTNode* tail = phead->prev;
	//LTNode* newnode = BuyLTNode(x);

	//tail->next = newnode;
	//newnode->prev = tail;
	//newnode->next = phead;
	//phead->prev = newnode;
	LTInsert(phead, x);
}
//˫����ĳ�ʼ��
LTNode* LTInit()
{
	LTNode* phead = BuyLTNode(-1);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}
//˫�����ͷ��
void LTPushFront(LTNode* phead, LTDataType x)
{
	//assert(phead);
	//LTNode* newnode = BuyLTNode(x);
	//LTNode* first = phead->next;

	//phead->next = newnode;
	//newnode->prev = phead;

	//newnode->next = first;
	//first->prev = newnode;
	
	LTInsert(phead->next, x);
}
//˫����Ĵ�ӡ(����)
void LTPrint(LTNode* phead)
{
	assert(phead);
	printf("�ڱ�λ<==>");
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d<==>", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
//˫�����βɾ
void LTPopback(LTNode* phead)
{
	assert(phead);
	assert(!LTEmpty(phead));//�ж������Ƿ�Ϊ��

	//LTNode* tail = phead->prev;
	//LTNode* tailPrev = tail->prev;
	//free(tail);

	//tailPrev->next = phead;
	//phead->prev = tailPrev;
	LTErase(phead->prev);
}
//˫�����ͷɾ
void LTPopFront(LTNode* phead)
{
	assert(phead);
	assert(!LTEmpty(phead));

	//LTNode* next = phead->next;

	//phead->next = next->next;
	//next->next->prev = phead;
	//free(next);
	LTErase(phead->next);
}
//�ж������Ƿ�Ϊ��
bool LTEmpty(LTNode* phead)
{
	assert(phead);
	return phead->next = phead;
}
//����˫���������
LTNode* LTFind(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
//��˫���������λ�ò���
void LTInsert(LTNode* pos, LTDataType x)
{
	assert(pos);

	LTNode* prev = pos->prev;
	LTNode* newnode = BuyLTNode(x);

	prev->next = newnode;
	newnode->prev = prev;
	newnode->next = pos;
	pos->prev = newnode;
}
//��˫���������λ��ɾ��
void LTErase(LTNode* pos)
{
	assert(pos);

	LTNode* posPrev = pos->prev;
	LTNode* posNext = pos->next;

	posPrev->next = posNext;
	posNext->prev = posPrev;
	free(pos);
}
//˫���������
void LTDestory(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
}
//