#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;

void AdjustUp(HPDataType* a, int child);
void AdjustDown(int* a, int n, int parent);

void HeapInit(HP* php);
void HeapDestroy(HP* php);
void HeapPush(HP* php, HPDataType x);
// ɾ���Ѷ�����
void HeapPop(HP* php);
HPDataType HeapTop(HP* php);
bool HeapEmpty(HP* php);
int HeapSize(HP* php);




#include"Heap.h"

//int main()
//{
//	HP hp;
//	HeapInit(&hp);
//	int a[] = { 65,100,70,32,50,60 };
//	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
//	{
//		HeapPush(&hp, a[i]);
//	}
//
//	// 10:42����
//	while (!HeapEmpty(&hp))
//	{
//		int top = HeapTop(&hp);
//		printf("%d\n", top);
//		HeapPop(&hp);
//	}
//
//	return 0;
//}

// ������ô����--����
// �׶ˣ�1������һ����,̫�鷳��2���ռ临�Ӷ�+��������
//void HeapSort(int* a, int n)
//{
//	HP hp;
//	HeapInit(&hp);
//	// N*logN
//	for (int i = 0; i < n; ++i)
//	{
//		HeapPush(&hp, a[i]);
//	}
//
//	// N*logN
//	int i = 0;
//	while (!HeapEmpty(&hp))
//	{
//		int top = HeapTop(&hp);
//		a[i++] = top;
//		HeapPop(&hp);
//	}
//
//	HeapDestroy(&hp);
//}

// O(N*logN)
void HeapSort(int* a, int n)
{
	// ���� -- �����
	// ���� -- ��С��


	// ����--���ϵ�������
	/*for (int i = 1; i < n; i++)
	{
		AdjustUp(a, i);
	}*/

	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}

	// N*logN
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);

		// �ٵ�����ѡ����С����
		AdjustDown(a, end, 0);

		--end;
	}
}

int main()
{
	int a[] = { 7,8,3,5,1,9,5,4 };
	HeapSort(a, sizeof(a) / sizeof(int));

	return 0;
}