//#define _CRT_SECURE_NO_WARNINGS 1
/*��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������У����������ӡ��
Ҫ�󣺲���ʹ��C�������е��ַ�������������
����:char arr[] = "abcdef";
����֮����������ݱ�ɣ�fedcba */

#include<stdio.h>
void reverse_string(char* string)
{
	if (*string != '\0')//��ָ��stringָ��'\0'ʱ�����ٵݹ�
	{
		string++;
		reverse_string(string);
		printf("%c", *(string - 1));
	}
}

int main()
{
	char* arr = "abcdefgh";
	reverse_string(arr);
	return 0;
}
