#define _CRT_SECURE_NO_WARNINGS 1
//��C��������Ļ���������ͼ����
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *

#include<stdio.h>
//��ӡ����
int main() {
	int n;	//�ϰ벿������
	scanf("%d", &n);
	//�ϰ벿�֣�
	for (int i = 1; i <= n; i++) {	//������ѭ������
		//1����ӡ�ո�
		for (int j = 0; j < n - i; j++) {
			printf(" ");
		}
		//2����ӡ*��
		for (int j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
		//3��û��ӡ��һ�Ż���
		printf("\n");
	}
	//�°벿�֣�
	for (int i = 1; i <= n - 1; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * (n - 1 - i) + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}