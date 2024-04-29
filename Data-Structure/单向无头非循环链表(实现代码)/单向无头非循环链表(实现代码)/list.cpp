#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"

void SLTPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}

	printf("NULL\n");
}

SLTNode* BuyLTNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

void SLPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);  // 链表为空，pphead也不为空，因为他是头指针plist的地址
	//assert(*pphead); // 不能断言，链表为空，也需要能插入

	SLTNode* newnode = BuyLTNode(x);

	newnode->next = *pphead;
	*pphead = newnode;
}

//void SLPushBack(SLTNode* phead, SLTDataType x)
//{
//	SLTNode* tail = phead;
//	while (tail != NULL)
//	{
//		tail = tail->next;
//	}
//
//	SLTNode* newnode = BuyLTNode(x);
//	tail = newnode;
//}

void SLPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead); // 链表为空，pphead也不为空，因为他是头指针plist的地址
	//assert(*pphead); // 链表为空，可以尾插

	SLTNode* newnode = BuyLTNode(x);

	// 1、空链表
	// 2、非空链表
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newnode;
	}
}

void SLPopFront(SLTNode** pphead)
{
	assert(pphead); // 链表为空，pphead也不为空，因为他是头指针plist的地址
	assert(*pphead); // 链表为空，不能头删。（当然你还可以用温柔的检查）

	SLTNode* del = *pphead;
	*pphead = (*pphead)->next;
	free(del);

	// 一个节点
	// 多个节点
	//if ((*pphead)->next == NULL)
	//{
	//	free(*pphead);
	//	*pphead = NULL;
	//}
	//else
	//{
	//	SLTNode* del = *pphead;
	//	//*pphead = del->next;
	//	*pphead = (*pphead)->next;
	//	free(del);
	//}
}

void SLPopBack(SLTNode** pphead)
{
	assert(pphead); // 链表为空，pphead也不为空，因为他是头指针plist的地址
	assert(*pphead); // 链表为空，不能头删。（当然你还可以用温柔的检查）



	// 一个节点
	// 多个节点
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{


		SLTNode* tail = *pphead;
		// 找尾
		while (tail->next->next)
		{
			tail = tail->next;
		}

		free(tail->next);
		tail->next = NULL;
	}
}

SLTNode* STFind(SLTNode* phead, SLTDataType x)
{
	//assert(phead);

	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}

		cur = cur->next;
	}

	return NULL;
}

// 在pos之前插入
void SLInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pphead);
	assert(pos);
	//assert(*pphead);

	if (*pphead == pos)
	{
		SLPushFront(pphead, x);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		SLTNode* newnode = BuyLTNode(x);
		prev->next = newnode;
		newnode->next = pos;
	}
}

// 在pos之前插入
void SLInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);

	SLTNode* newnode = BuyLTNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

// 删除pos位置的值
void SLErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(pos);

	if (pos == *pphead)
	{
		SLPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		prev->next = pos->next;
		free(pos);
	}
}

void SLEraseAfter(SLTNode* pos)
{
	assert(pos);
	assert(pos->next);

	SLTNode* next = pos->next;
	pos->next = next->next;
	free(next);
}

void STDefine(SLTNode* phead, SLTDataType x, SLTDataType e)  //传入链表首节点的地址，需要查找的数据
{
	SLTNode* cur = phead;  //通过cur临时存储节点的地址
	while (cur != NULL)  //当cur记录的是节点地址时，持续遍历整个链表
	{
		if (cur->data == x)  //若当前链表存储的数据与所查找的数据相同
		{
			cur->data = e;  //将e的内容赋值传递给数据域
		}
		cur = cur->next;  //用当前cur中所存储下一个节点的地址找到下一个节点，并依次循环
	}
}
