#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//初始化顺序表的函数
void SLInit(SL* psl)
{
	psl->a = (SLDatatype*)malloc(sizeof(SLDatatype) * 4);//动态开辟空间
	//判断空间是否开辟成功
	if (psl->a == NULL)
	{
		perror("malloc fail");
		return;
	}
	psl->capacity = 0;
	psl->size = 0;
}
//销毁顺序表的函数
void SLDestroy(SL* psl) 
{
	free(psl->a);
	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;
}
//检查容量
void SLCheckCapacity(SL* psl)
{
	if (psl->size == psl->capacity)
	{
		SLDatatype* tmp = (SLDatatype*)realloc(psl->a,
			sizeof(SLDatatype) * psl->capacity * 2);//空间的动态扩容
		if (tmp == NULL)
		{
			perror("realloc faiul");
			return;
		}
		psl->a = tmp;
		psl->capacity *= 2;
	}
}
//顺序表的尾插
void SLPushBack(SL* psl, SLDatatype x)
{
	psl->a[psl->size] = x;
	psl->size++;
}
//顺序表的打印函数
void SLPrint(SL* psl)
{
	for (int i = 0;i < psl->size;i++)
	{
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}
//顺序表的头插
void SLPushFront(SL* psl, SLDatatype x)
{
	//判断是否要扩容
	SLCheckCapacity(psl);
	//挪动数据
	int end = psl->size - 1;
	while (end >= 0)
	{
		psl->a[end + 1] = psl->a[end];
		--end;
	}
	psl->a[0] = x;
	psl->size++;
}
//顺序表的尾删
void SLPopBack(SL* psl)
{
	//判断会不会数组越界
	//温柔检查
	/*if (psl->size == 0);
	{
		return;
	}*/
	//暴力检查
	assert(psl->size > 0);

	psl->size--;
}
//顺序表的头删
void SLPopFront(SL* psl)
{
	assert(psl->size > 0);
	int start = 1;
	while (start < psl->size)
	{
		psl->a[start - 1] = psl->a[start];
		start++;
	}
	psl->size--;
}
//顺序表任意位置数据的插入
void SLInsert(SL* psl, int pos, SLDatatype x)
{
	assert(0 <= pos && pos <= psl->size);
	//检查容量
	SLCheckCapacity(psl);
	//挪动数据
	int end = psl->size - 1;
	while (end >= pos)
	{
		psl->a[end + 1] = psl->a[end];
		--end;
	}
	psl->a[pos] = x;
	psl->size++;
}
//顺序表任意位置数据的删除
void SlErase(SL* psl, int pos)
{
	assert(0 <= pos && pos < psl->size);

	int start = pos + 1;
	while (start < psl->size)
	{
		psl->a[start - 1] = psl->a[start];
		++start;
	}
}
//顺序表数据的查找
//找到返回下标，没找到返回-1
int SLFind(SL* psl, SLDatatype x)
{
	for (int i = 0;i < psl->size;i++)
	{
		if (psl->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
//顺序表数据的修改
void SLModify(SL* psl, int pos, SLDatatype x)
{
	assert(0 <= pos && pos < psl->size);
	psl->a[pos] = x;
}