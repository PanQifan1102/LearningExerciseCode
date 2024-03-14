#pragma once
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


// ��̬��˳���
// ��С�˲����ã��������˷�
//#define N 10000
//typedef int SLDatatype;
//struct SeqList
//{
//	SLDatatype a[N];
//	int size;
//};

// ��̬˳���
//typedef double SLDatatype;
typedef int SLDatatype;
typedef struct SeqList
{
	SLDatatype* a;
	int size;       // �洢����Ч���ݵĸ���
	int capacity;   // ����
}SL;

void SLInit(SL* psl);
void SLDestroy(SL* psl);

void SLPrint(SL* psl);

//STL�������
void SLPushBack(SL* psl, SLDatatype x);
void SLPushFront(SL* psl, SLDatatype x);
void SLPopBack(SL* psl);
void SLPopFront(SL* psl);

void SLInsert(SL* psl, int pos, SLDatatype x);
void SLErase(SL* psl, int pos);

// �ҵ������±꣬û���ҵ�����-1
int SLFind(SL* psl, SLDatatype x);
void SLModify(SL* psl, int pos, SLDatatype x);
