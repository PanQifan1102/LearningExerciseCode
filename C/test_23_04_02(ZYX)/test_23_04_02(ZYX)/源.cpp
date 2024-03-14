#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    int i,m, k, cnt = 0;
    scanf("%d", &m);
    for (i = m - 1;i > 1;i--)
    {
        for (k = 2;k < i;k++)//判断小于的数是不是素数
        {
            if (i % k == 0)//是素数跳出循环
            {
                break;
            }
        }
        if (k >= i)//打印出相应素数
        {
            printf("%6d", i);      
            cnt++;              
        }
        if (cnt >= 10)//判断够不够十个素数
        {
            break;
        }
    }
    return 0;
}