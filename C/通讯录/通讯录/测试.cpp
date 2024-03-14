#define _CRT_SECURE_NO_WARNINGS 1
#include"通讯录.h"

void menu()
{
	printf("***********************************");
	printf("******** 1.add     2.del **********");
	printf("******** 3.search  4.modity *******");
	printf("******** 5.sort    6.print ********");
	printf("************* 0.exit  *************");
	printf("***********************************");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

int main()
{
	int input = 0;
	//创建通讯录
	Contact con;//通讯录
	//初始化通讯录
	//给data申请一块连续的空间在堆区上
	//sz = 0；
	//capacity初始化为当前的最大容量
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		//增加
		case ADD:
			AddContact(&con);
			break;			
		//删除
		case DEL:
			DelContact(&con);
			break;
		//查询
		case SEARCH:
			SearchContact(&con);
			break;
		//修改
		case MODIFY:
			ModifyContact(&con);
			break;
		//分类
		case SORT:
			/* ……开发中…… */
			break;
		//打印
		case PRINT:
			PrintContact(&con);
			break;
		//退出
		case EXIT:
			//保存信息到文件
			SaveContact(&con);
			//销毁通讯录
			DestoryContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	}
	while (input);
	return 0;
}