/*描述
小乐乐输入百分制成绩，他想将成绩转换成等级制。转换规则为：90-100为’A’，80-89为’B’，70-79为’C’，60-69为’D’，59以下为’E’。如果输入的成绩不在0-100之间，输出’F’。
输入描述：
一行，一个整数表示的成绩。
输出描述：
一行，转换后的等级。*/

#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);
    if (a >= 0 && a <= 100)
    {
        if (a >= 90 && a <= 100)
            printf("A");
        if (a >= 80 && a <= 89)
            printf("B");
        if (a >= 70 && a <= 79)
            printf("C");
        if (a >= 60 && a <= 69)
            printf("D");
        if (a >= 0 && a <= 59)
            printf("E");
    }
    else
        printf("F");
    return 0;
}