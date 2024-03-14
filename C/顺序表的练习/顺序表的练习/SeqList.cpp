#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//��ʼ��˳���ĺ���
void SLInit(SL* psl)
{
	psl->a = (SLDatatype*)malloc(sizeof(SLDatatype) * 4);//��̬���ٿռ�
	//�жϿռ��Ƿ񿪱ٳɹ�
	if (psl->a == NULL)
	{
		perror("malloc fail");
		return;
	}
	psl->capacity = 0;
	psl->size = 0;
}
//����˳���ĺ���
void SLDestroy(SL* psl) 
{
	free(psl->a);
	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;
}
//�������
void SLCheckCapacity(SL* psl)
{
	if (psl->size == psl->capacity)
	{
		SLDatatype* tmp = (SLDatatype*)realloc(psl->a,
			sizeof(SLDatatype) * psl->capacity * 2);//�ռ�Ķ�̬����
		if (tmp == NULL)
		{
			perror("realloc faiul");
			return;
		}
		psl->a = tmp;
		psl->capacity *= 2;
	}
}
//˳����β��
void SLPushBack(SL* psl, SLDatatype x)
{
	psl->a[psl->size] = x;
	psl->size++;
}
//˳���Ĵ�ӡ����
void SLPrint(SL* psl)
{
	for (int i = 0;i < psl->size;i++)
	{
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}
//˳����ͷ��
void SLPushFront(SL* psl, SLDatatype x)
{
	//�ж��Ƿ�Ҫ����
	SLCheckCapacity(psl);
	//Ų������
	int end = psl->size - 1;
	while (end >= 0)
	{
		psl->a[end + 1] = psl->a[end];
		--end;
	}
	psl->a[0] = x;
	psl->size++;
}
//˳����βɾ
void SLPopBack(SL* psl)
{
	//�жϻ᲻������Խ��
	//������
	/*if (psl->size == 0);
	{
		return;
	}*/
	//�������
	assert(psl->size > 0);

	psl->size--;
}
//˳����ͷɾ
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
//˳�������λ�����ݵĲ���
void SLInsert(SL* psl, int pos, SLDatatype x)
{
	assert(0 <= pos && pos <= psl->size);
	//�������
	SLCheckCapacity(psl);
	//Ų������
	int end = psl->size - 1;
	while (end >= pos)
	{
		psl->a[end + 1] = psl->a[end];
		--end;
	}
	psl->a[pos] = x;
	psl->size++;
}
//˳�������λ�����ݵ�ɾ��
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
//˳������ݵĲ���
//�ҵ������±꣬û�ҵ�����-1
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
//˳������ݵ��޸�
void SLModify(SL* psl, int pos, SLDatatype x)
{
	assert(0 <= pos && pos < psl->size);
	psl->a[pos] = x;
}