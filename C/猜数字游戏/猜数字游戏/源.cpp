/*给出1-100的随机数，猜数字*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 //游戏菜单
void menu()
{
	printf("#######################\n");
	printf("###### 1.开始游戏 #####\n");
	printf("###### 0.退出游戏 #####\n");
	printf("#######################\n");
}
//游戏内容
void game()
{
	//1.生成随机数
	int ret = rand() % 100 + 1;
	//rand函数返回的是一个0-32767之间的数字
	//时间->时间戳
	//%100的余数是0-99，然后+1范围便是1-100
  //2.猜随机数
	int guess = 0;
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了！！！\n");
			break;
		}
	}

}
//游戏框架
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//打印菜单
		printf("请选择（1/0）：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		}
	} while (input);
	return 0;
}
