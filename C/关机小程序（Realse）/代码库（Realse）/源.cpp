#define _CRT_SECURE_NO_WARNINGS 1
//实现一个函数：若输入指定字符串则不强制关机；若输入非指定字符串或
//不输入，则在60秒后自动关机
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr[10] = { 0 };
	system("shutdown -s -t 60");//设置60秒后关机
	//输入部分
again:
	printf("输入“我是猪”则取消自动关机：");
	scanf("%s", &arr);//接受输入字符串
	//判断字符串是否合法
	if (strcmp(arr, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}