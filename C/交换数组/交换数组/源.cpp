#define _CRT_SECURE_NO_WARNINGS 1
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#include<stdio.h>

int main()
{
    int i = 0;
    int temp[4] = {0};
    int str1[4] = { 1,2,3,4 };
    int str2[4] = { 5,6,7,8 };
    for (i = 0; i <= 3; i++)
    {
        temp[i] = str1[i];
        str1[i] = str2[i];
        str2[i] = temp[i];
    }
    for (i = 0; i <= 3;i++)
    {
        printf("%d ", str1[i]);
    }
    printf("\n");
    for (i = 0; i <= 3; i++)
    {
        printf("%d ", str2[i]);
    }

    return 0;

}