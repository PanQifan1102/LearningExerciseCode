#include<stdio.h>
#include<string.h>

//�ṹ���������
typedef struct Node
{
	int data;
	struct Node* next;
}Node;

//�ṹ���ڴ��Ӧ
struct S
{
	int i;
	char c;
};
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));
	return 0;
}

//λ��
struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 50;
};

//����
union Un
{
	char c;
	int i;
};

//����ö��ģ����Ƽ�����
void menu()
{
	printf("***********************\n");
	printf("***** 1.add 2.sub *****\n");
	printf("***** 3.mul 4.div *****\n");
	printf("******* 0.exit ********\n");
	printf("***********************\n");
}
enum option
{
	exit,
	add,
	sub,
	mul,
	div
};
int main()
{
	int input = 0;
	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d ", &input);
		switch (input)
		{
		case add:
			break;
		case sub:
			break;
		case mul:
			break;
		case div:
			break;
		case exit:
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}