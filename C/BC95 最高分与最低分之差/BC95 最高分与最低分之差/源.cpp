/*描述
输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
输入描述：
两行，第一行为n，表示n个成绩，不会大于10000。

第二行为n个成绩（整数表示，范围0~100），以空格隔开。
输出描述：
一行，输出n个成绩中最高分数和最低分数的差。*/

#include <stdio.h>

int main()
{
    int number = 0;
    int m = 0;
    int max = 0;
    int min = 100;
    scanf("%d", &number);

    for (int i = 0;i < number;i++)
    {
        scanf("%d", &m);
        if (m > max)
        {
            max = m;
        }
        if (m < min)
        {
            min = m;
        }

    }

    printf("%d", max - min);
    return 0;
}