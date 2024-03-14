#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

//void SLInit(SL* psl)
//{
//	psl->a = NULL;
//	psl->capacity = 0;
//	psl->size = 0;
//}

//顺序表的初始化
void SLInit(SL* psl)
{
	assert(psl);
	psl->a = (SLDatatype*)malloc(sizeof(SLDatatype) * 4);
	if (psl->a == NULL)
	{
		perror("malloc fail");
		return;
	}

	psl->capacity = 4;
	psl->size = 0;
}

//顺序表的销毁
void SLDestroy(SL* psl)
{
	assert(psl);
	free(psl->a);
	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;
}

//顺序表的遍历（打印）
void SLPrint(SL* psl)
{
	assert(psl);
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}

//顺序表的容量检查
void SLCheckCapacity(SL* psl)
{
	assert(psl);

	if (psl->size == psl->capacity)
	{
		SLDatatype* tmp = (SLDatatype*)realloc(psl->a, sizeof(SLDatatype) * psl->capacity * 2);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}

		psl->a = tmp;
		psl->capacity *= 2;
	}
}

//顺序表的尾插
void SLPushBack(SL* psl, SLDatatype x)
{
	assert(psl);

	//psl->a[psl->size] = x;
	//psl->size++;

	//SLCheckCapacity(psl);

	//psl->a[psl->size++] = x;

	SLInsert(psl, psl->size, x);
}

//顺序表的头插
void SLPushFront(SL* psl, SLDatatype x)
{
	assert(psl);
	//SLCheckCapacity(psl);

	//// 挪动数据
	//int end = psl->size - 1;
	//while (end >= 0)
	//{
	//	psl->a[end + 1] = psl->a[end];
	//	--end;
	//}

	//psl->a[0] = x;
	//psl->size++;
	SLInsert(psl, 0, x);
}

//顺序表的尾删
void SLPopBack(SL* psl)
{
	assert(psl);
	// 暴力检查
	//assert(psl->size > 0);

	//// 温柔的检查
	////if (psl->size == 0)
	////	return;

	////psl->a[psl->size - 1] = 0;
	//psl->size--;

	SLErase(psl, psl->size - 1);
}

//顺序表的头删
void SLPopFront(SL* psl)
{
	assert(psl);
	// 暴力检查
	//assert(psl->size > 0);

	///*int start = 0;
	//while (start < psl->size-1)
	//{
	//	psl->a[start] = psl->a[start + 1];
	//	start++;
	//}*/

	//int start = 1;
	//while (start < psl->size)
	//{
	//	psl->a[start-1] = psl->a[start];
	//	start++;
	//}

	//psl->size--;

	SLErase(psl, 0);
}

//顺序表的任意位置插入
void SLInsert(SL* psl, int pos, SLDatatype x)
{
	assert(psl);
	//assert(0 <= pos <= psl->size);
	assert(0 <= pos && pos <= psl->size);

	SLCheckCapacity(psl);

	int end = psl->size - 1;
	while (end >= pos)
	{
		psl->a[end + 1] = psl->a[end];
		--end;
	}

	psl->a[pos] = x;
	psl->size++;
}

//顺序表的任意位置删除
void SLErase(SL* psl, int pos)
{
	assert(psl);
	assert(0 <= pos && pos < psl->size);
	//assert(psl->size > 0);

	int start = pos + 1;
	while (start < psl->size)
	{
		psl->a[start - 1] = psl->a[start];
		++start;
	}

	psl->size--;
}

//顺序表的查找
int SLFind(SL* psl, SLDatatype x)
{
	assert(psl);

	for (int i = 0; i < psl->size; i++)
	{
		if (psl->a[i] == x)
		{
			return i;
		}
	}

	return -1;
}

//顺序表的修改

void SLModify(SL* psl, int pos, SLDatatype x)
{
	assert(psl);

	assert(0 <= pos && pos < psl->size);

	psl->a[pos] = x;
}