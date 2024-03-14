#define _CRT_SECURE_NO_WARNINGS 1
//计算机期末考试有6个学生成绩存入一维数组中，
//请输出所有及格的学生成绩，并统计及格人数。
#include<stdio.h>
int main()
{
    int a[6] = { 0 };
    scanf("%d %d %d %d %d %d ",
        &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);
    int count = 0;
    for (int i = 0;i < 6;i++)
    {
        if (a[i] > 60)
        {
            printf("%5d", a[i]);
            count++;
        }
    }
    printf("\n");
    printf("count=%d", count);
}