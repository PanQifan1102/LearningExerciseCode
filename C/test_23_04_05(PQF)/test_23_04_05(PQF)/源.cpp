#define _CRT_SECURE_NO_WARNINGS 1
//寻找代码问题
#include <stdio.h>
int main()
{
    int i = 0;
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    for (i = 0; i <= 12; i++)//问题：12超出数组的大小范围
    {
        arr[i] = 0;
        printf("hello bit\n");
    }
    return 0;
}//当前问题：死循环输出“hello bit”

 //问题解释：
//指定堆栈数组的整数偏移量超过该数组的最大边界。 
//它可能会导致堆栈溢出错误、随机行为或崩溃。

//解决策略：
//把第八行的 12 改成 9