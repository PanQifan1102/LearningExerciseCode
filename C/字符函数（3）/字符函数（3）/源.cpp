#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//strstr函数
int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "bcd";
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了\n");
	}
	return 0;
}
//模拟strstr函数
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1, str2);
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cp = str1;
	if (*str2 == '\0')
	{
		return (char*)str1;
	}
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}
	return NULL;
}

//strtok函数
int main()
{
	char arr[] = "zpw@bitedu.tech hehe";
	const char* p = "@.";
	char tmp[30] = { 0 };
	strcpy(tmp, arr);
	char* ret = NULL;
	for (ret = strtok(tmp, p);ret != NULL;ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	return 0;
}

//strerror函数
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	fclose(pf);
	pf = NULL;
	return 0;
}