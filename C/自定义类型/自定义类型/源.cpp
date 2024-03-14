#include<stdio.h>
#include<string.h>

//结构体的自引用
typedef struct Node
{
	int data;
	struct Node* next;
}Node;

//结构体内存对应
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

//位段
struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 50;
};

//联合
union Un
{
	char c;
	int i;
};

//利用枚举模拟设计计算器
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
		printf("请选择:>");
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