#pragma once
//ͷ�ļ�����
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//=======================================
//��Ķ���
#define N 10
//=======================================
//���͵��ض���
typedef int SLDatatype;
//=======================================
//����˳���
////��̬���ݱ�
//struct SeqList
//{
//	SLDatatype a[N];
//	int size;
//};
//��̬˳���
typedef struct SeqList
{
	SLDatatype* a;
	int size;//�洢����Ч���ݸ���
	int capacity;//������
}SL;
//=======================================
//��غ���������
//��ʼ��˳���ĺ���
void SLInit(SL *psl);
//����˳���ĺ���
void SLDestroy(SL *psl);
//˳����β��
void SLPushBack(SL* psl, SLDatatype x);
//˳����ͷ��
void SLPushFront(SL* psl, SLDatatype x);
//˳����βɾ
void SLPopBack(SL* psl);
//˳����ͷɾ
void SLPopFront(SL* psl);
//��������ĺ���
void SLCheckCapacity(SL* psl);
//˳���Ĵ�ӡ����
void SLPrint(SL* psl);
//˳�������λ�����ݵĲ���
void SLInsert(SL* psl, int pos,SLDatatype x);
//˳�������λ�����ݵ�ɾ��
void SlErase(SL* psl, int pos);
//˳������ݵĲ���
int SLFind(SL* psl, SLDatatype x);
//˳������ݵ��޸�
void SLModify(SL* psl, int pos, SLDatatype x);