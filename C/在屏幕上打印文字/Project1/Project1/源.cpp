#include<stdio.h>//保证printf的运行
#include<string.h>//保证strlen的运行
int main()
{
	//字符串的应用&注释的应用
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0' };
	char arr3[] = { 'a','b','c' };
	printf("%s\n", arr1);//打印一串字符
	printf("%s\n", arr2);//打印一串字符
	printf("%s\n", arr3);//打印一串字符
	int len1 = strlen("arr1");//测量一串字符的长度
	int len2 = strlen("arr2");//测量一串字符的长度
	int len3 = strlen("arr3");//测量一串字符的长度
	printf("%d\n", len1);//打印该串字符的长度
	printf("%d\n", len2);//打印该串字符的长度
	printf("%d\n", len3);//打印该串字符的长度
	//转义字符的应用&注释的应用
	printf("c:\test\test.c\n");//“\t”为转义字符，结果为“c: est est.c”
	printf("c:\\test\\test.c\n");//在转义字符前加“\”则转变原有意义
	return 0;
}
