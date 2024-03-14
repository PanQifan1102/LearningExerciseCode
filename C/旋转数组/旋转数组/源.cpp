#define _CRT_SECURE_NO_WARNINGS 1
//给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。
//示例 1:
//输入: nums = [1, 2, 3, 4, 5, 6, 7], k = 3
//输出 : [5, 6, 7, 1, 2, 3, 4]
//解释 :
//	向右轮转 1 步 : [7, 1, 2, 3, 4, 5, 6]
//	向右轮转 2 步 : [6, 7, 1, 2, 3, 4, 5]
//	向右轮转 3 步 : [5, 6, 7, 1, 2, 3, 4]
//	示例 2 :
//	输入：nums = [-1, -100, 3, 99], k = 2
//	输出：[3, 99, -1, -100]
//	解释 :
//	向右轮转 1 步 : [99, -1, -100, 3]
//	向右轮转 2 步 : [3, 99, -1, -100]
//	提示：
//	1 <= nums.length <= 105
//	- 231 <= nums[i] <= 231 - 1
//	0 <= k <= 105
#include<stdio.h>
#define NUM 4
int main()
{
	//创建数组
	int nums[NUM] = { 0 };
	int sz = sizeof(nums) / sizeof(nums[0]);
	//数组元素输入
	for (int count = 1,i = 0;count <= NUM;count++,i++)
	{
		printf("输入数组的数据，第%d个元素是：", count);
		scanf("%d", &nums[i]);

	}
	//旋转数组
	int k = 0; int m = 0;
	printf("输入向右轮转几个位置：");
	scanf("%d", &k);
	//创建存储旋转数据的数组
	int n = 0;
	int newnums[NUM+2] = { 0 };
	for ( n = 0,m = 0;m < k;m++,n++)
	{
		newnums[n] = nums[sz-1-m];
	}
	newnums[n] = '\0';
	//创建没有旋转的数组
	int i = 0; int j = 0;
	int unchangenums[NUM] = { 0 };
	for (i = 0,j = 0;j<(sz-k);j++,i++)
	{
		unchangenums[i] = nums[j];
	}
	//拼接两个数组 
	for (i = 0;i < NUM;n++, i++)
	{
		newnums[n] = unchangenums[i];
	}
	//打印结果
	printf("旋转后的数组是：");
	for (int i = 0;i < NUM;i++)
	{
		printf("%d ", newnums[i]);
	}

}