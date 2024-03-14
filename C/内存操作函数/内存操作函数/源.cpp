#include<string.h>
#include<assert.h>
#include<stdio.h>

//memcpy
int main()
{
	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
	int arr2[10] = { 0 };
	memcpy(arr1, arr2, 20);
	return 0;
}
//ģ��memcpy����
void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	while (num--)
	{
		*(char*) dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return 0;
}

//memmove����
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	memmove(arr1 + 2, arr1, 20);
	return 0;
}
//ģ��memmove����
void *my_memmove(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		//ǰ����
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//��ǰ
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}

//memcmp����
int main()
{
	float arr1[] = { 1.0,2.0,3.0,4.0 };
	float arr2[] = { 1.0,3.0 };
	int ret = memcmp(arr1, arr2, 8);
	printf("%d\n", ret);
	return 0;
}

//memset����
int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 20);
	return 0;
}