#define _CRT_SECURE_NO_WARNINGS 1
//С�γ�����һ��ϵͳ��ʱ����ĸ����ֵ�̥ѹ��
//�������̥ѹ���Ǻ�ƽ�⣬����ܶ��г�������ص�Ӱ�졣
//�����ǰ��ĸ����� 
// ���� ��ǰ�֡���ǰ�֡��Һ��֡������ ���� ˳�α��Ϊ 1��2��3��4��
// ����������дһ����������ʱ������ֵ�̥ѹ����������ȷ�ı�����Ϣ��
// �����������£�
//->���������̥��ѹ��ֵ�������е����ֵ�����һ��������ֵ�ڣ�
//���Ҷ�������ϵͳ�趨����ͱ���̥ѹ����˵�������������������
//->�������һ����̥��ѹ��ֵ�������е����ֵ��������ֵ��
//���ߵ���ϵͳ�趨����ͱ���̥ѹ���򲻽�Ҫ����������Ҫ����
//����©������̥��׼ȷλ�ã�
// ->�����������������������̥��ѹ��ֵ�������е����ֵ��������ֵ��
// ���ߵ���ϵͳ�趨����ͱ���̥ѹ���򱨾�Ҫ����������̥��
//�����ʽ��
//������һ���и��� 6 ��[0, 400] ��Χ�ڵ�������
// ����Ϊ 1~4 ����̥��̥ѹ����ͱ���̥ѹ���Լ�̥ѹ�����ֵ��
//�����ʽ��
//���������̥ѹֵ������Ӧ��Ϣ��
//������ñ�������� Normal��
//�����һ����̥��Ҫ��������� Warning : please check #X!������ X �ǳ��������̥�ı�ţ�
//�����Ҫ���������̥����� Warning : please check all the tires!��


#include<stdio.h>
int main() {
	int i, A, B, C, D, lowest, threshold;
	int MAX = 0, count = 0, a = 0, b = 0, c = 0, d = 0;
	scanf("%d %d %d %d %d %d", &A, &B, &C, &D, &lowest, &threshold);
	if (A > B && A > C && A > D)//���̥ѹ
	{
		MAX = A;
	}
	else if (B > A && B > C && B > D)
	{
		MAX = B;
	}
	else if (C > A && C > B && C > D)
	{
		MAX = C;
	}
	else
	{
		MAX = D;
	}
	if (MAX - A <= threshold &&
		MAX - B <= threshold &&
		MAX - C <= threshold &&
		MAX - D <= threshold &&
		A >= lowest && 
		B >= lowest && 
		C >= lowest && 
		D >= lowest) 
	{
		printf("Normal");
	}
	//���������̥
	if (MAX - A > threshold || A < lowest)
	{
		count++;
		a = 1;
	}
	if (MAX - B > threshold || B < lowest)
	{
		count++;
		b = 2;
	}
	if (MAX - C > threshold || C < lowest)
	{
		count++;
		c = 3;
	}
	if (MAX - D > threshold || D < lowest)
	{
		count++;
		d = 4;
	}
	if (count >= 2) 
	{
		printf("Warning: please check all the tires!");
	}
	else if (count < 2 && count != 0) 
	{
		if (a == 1) {
			printf("Warning: please check #%d!", a);
		}
		else if (b == 2) {
			printf("Warning: please check #%d!", b);
		}
		else if (c == 3) {
			printf("Warning: please check #%d!", c);
		}
		else
			printf("Warning: please check #%d!", d);
	}
	return 0;
}
