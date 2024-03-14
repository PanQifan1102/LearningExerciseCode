#define _CRT_SECURE_NO_WARNINGS 1
//给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，
//另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。
//请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
//注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。
//为了应对这种情况，nums1 的初始长度为 m + n，其中前 m 个元素表示应
//合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。
//
//示例 1：
//输入：nums1 = [1, 2, 3, 0, 0, 0], m = 3, nums2 = [2, 5, 6], n = 3
//输出：[1, 2, 2, 3, 5, 6]
//解释：需要合并[1, 2, 3] 和[2, 5, 6] 。
//合并结果是[1, 2, 2, 3, 5, 6] ，其中斜体加粗标注的为 nums1 中的元素。
//
//示例 2：
//输入：nums1 = [1], m = 1, nums2 = [], n = 0
//输出：[1]
//解释：需要合并[1] 和[] 。
//合并结果是[1] 。
//
//示例 3：
//输入：nums1 = [0], m = 0, nums2 = [1], n = 1
//输出：[1]
//解释：需要合并的数组是[] 和[1] 。
//合并结果是[1] 。
//注意，因为 m = 0 ，所以 nums1 中没有元素。nums1 中仅存的 0 
//仅仅是为了确保合并结果可以顺利存放到 nums1 中。
//
//思路：
//合并两数组的前指定个元素，在合并后还要进行递增排序

#include<stdio.h>
#include<windows.h>
#define NUM 5

//冒泡排序
void Bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = i + 1; j < sz; j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
int main()
{
	int arr1[NUM] = { 0 };
	int arr2[NUM] = { 0 };
	//对第一个数组进行数据插入
	for (int i = 0,count = 1;i < NUM;i++, count++)
	{
		printf("arr1数组的第%d个元素：",count);
		scanf("%d", &arr1[i]);
		system("cls");
	}
	//对第一个数组进行排序
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	Bubble_sort(arr1, sz1);
	Sleep(100);
	//对第二个数组进行数据插入
	for (int i = 0, count = 1;i < NUM;i++, count++)
	{
		printf("arr2数组的第%d个元素：", count);
		scanf("%d", &arr2[i]);
		system("cls");
	}
	//对第二个数组进行排序
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	Bubble_sort(arr2, sz2);
	//显示前两个数组
	for (int i = 0;i < sz1;i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0;i < sz2;i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	//接受数据的数组
	int arr3[2 * NUM] = { 0 };
	//每个数组的接受个数
	int x = 0;
	int y = 0;
	printf("需要第一个数组的前几个元素？需要：");
	scanf("%d", &x);
	printf("需要第二个数组的前几个元素？需要：");
	scanf("%d", &y);
	//实现合并的代码 没进循环？
	for (int i = 0, j = 0, k = 0;i < (x + y);i++)
	{
		if (i < x)
		{
			arr3[i] = arr1[j];
			j++;
		}
		else
		{
			arr3[i] = arr2[k];
			k++;
		}
	}
	//排序合并的代码
	int sz3 = sizeof(arr3) / sizeof(arr3[0]);
	Bubble_sort(arr3, sz3);
	//打印合并数组
	for (int i = 0;i < sz3;i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}