#include<stdio.h>//��֤printf������
#include<string.h>//��֤strlen������
int main()
{
	//�ַ�����Ӧ��&ע�͵�Ӧ��
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0' };
	char arr3[] = { 'a','b','c' };
	printf("%s\n", arr1);//��ӡһ���ַ�
	printf("%s\n", arr2);//��ӡһ���ַ�
	printf("%s\n", arr3);//��ӡһ���ַ�
	int len1 = strlen("arr1");//����һ���ַ��ĳ���
	int len2 = strlen("arr2");//����һ���ַ��ĳ���
	int len3 = strlen("arr3");//����һ���ַ��ĳ���
	printf("%d\n", len1);//��ӡ�ô��ַ��ĳ���
	printf("%d\n", len2);//��ӡ�ô��ַ��ĳ���
	printf("%d\n", len3);//��ӡ�ô��ַ��ĳ���
	//ת���ַ���Ӧ��&ע�͵�Ӧ��
	printf("c:\test\test.c\n");//��\t��Ϊת���ַ������Ϊ��c: est est.c��
	printf("c:\\test\\test.c\n");//��ת���ַ�ǰ�ӡ�\����ת��ԭ������
	return 0;
}
