#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

////编写代码，演示多个字符从两端向中间汇聚
//int main()
//{
//	char arr1[] = "I also missed you in Xianyang";
//	char arr2[] = "#############################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep (500);
//		system("cls");
//		left++;
//		right--;
//    }
//	printf("%s\n", arr2);
//	return 0;
//}
//
////编写代码模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录完成；如果三次均输入错误则退出程序）
//int main()
//
//{
//	int i = 0;
//	char password  [20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入！\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码错误，退出程序！\n");
//	return 0;
//}

//猜数字游戏（1-100内）
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





