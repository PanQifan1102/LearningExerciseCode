#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

////��д���룬��ʾ����ַ����������м���
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
////��д����ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼��ɣ�������ξ�����������˳�����
//int main()
//
//{
//	int i = 0;
//	char password  [20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ���\n");
//			break;
//		}
//		else
//		{
//			printf("����������������룡\n");
//		}
//	}
//	if (i == 3)
//		printf("������������˳�����\n");
//	return 0;
//}

//��������Ϸ��1-100�ڣ�
 //��Ϸ�˵�
void menu()
{
	printf("#######################\n");
	printf("###### 1.��ʼ��Ϸ #####\n");
	printf("###### 0.�˳���Ϸ #####\n");
	printf("#######################\n");
}
 //��Ϸ����
void game()
{
	//1.���������
	int ret = rand() % 100 + 1;
	  //rand�������ص���һ��0-32767֮�������
	  //ʱ��->ʱ���
	  //%100��������0-99��Ȼ��+1��Χ����1-100
	//2.�������
	int guess = 0;
	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		     {
			  printf("�´���\n");
		     }
		     else
		     {
			printf("��ϲ�㣬�¶��ˣ�����\n");
			break;
		      }
	}

}
 //��Ϸ���
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��1/0����\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		}
	} while (input);
	return 0;
}





