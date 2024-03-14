#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"
//双链表插入一个节点
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
//双链表的尾插
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
//双链表的初始化
LTNode* LTInit()
{
	LTNode* phead = BuyLTNode(-1);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}
//双链表的头插
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
//双链表的打印(遍历)
void LTPrint(LTNode* phead)
{
	assert(phead);
	printf("哨兵位<==>");
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d<==>", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
//双链表的尾删
void LTPopback(LTNode* phead)
{
	assert(phead);
	assert(!LTEmpty(phead));//判断链表是否为空

	//LTNode* tail = phead->prev;
	//LTNode* tailPrev = tail->prev;
	//free(tail);

	//tailPrev->next = phead;
	//phead->prev = tailPrev;
	LTErase(phead->prev);
}
//双链表的头删
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
//判断链表是否为空
bool LTEmpty(LTNode* phead)
{
	assert(phead);
	return phead->next = phead;
}
//查找双链表的数据
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
//在双链表的任意位置插入
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
//在双链表的任意位置删除
void LTErase(LTNode* pos)
{
	assert(pos);

	LTNode* posPrev = pos->prev;
	LTNode* posNext = pos->next;

	posPrev->next = posNext;
	posNext->prev = posPrev;
	free(pos);
}
//双链表的销毁
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