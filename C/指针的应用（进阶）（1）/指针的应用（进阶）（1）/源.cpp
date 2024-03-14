#include<stdio.h>

//exercise1
int main()
{
	char str1[] = "hello qingtian.";
	char str2[] = "hello qingtian.";
	const char *str3[] = {"hello qingtian."};
	const char* str4[] = {"hello qingtian."};
	if (str1 == str2)
		printf("1&2 are same");
	else
		printf("1&2 are not same");
	if(str3==str4)
		printf("3&4 are same");
	else
		printf("3&4 are same");
	return 0;
}
 
//exercise2
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*parr)[10] = &arr;
	printf("%p\n", *parr);
	return 0;
}

//exercise3
void print(int(*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4.5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);
	return 0;
}

//exercise4
void test(int arr[3][5])
{}
void test(int arr[][5])
{}
void test(int (*arr)[5])
{}
int main()
{
	int arr[3][5];
	test(arr);
	return 0;
}