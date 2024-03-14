#define _CRT_SECURE_NO_WARNINGS 1
//猴子第一天摘下若干个桃子，当即吃了2 / 3，还不过瘾，又多吃了一个，
//第二天早上又将剩下的桃子吃掉2 / 3，又多吃了一个。以后每天早上都
//吃了前一天剩下的2 / 3再多一个。到第n天早上想再吃时，发现只剩下k
//个桃子了。求第一天共摘了多少桃子。
#include<stdio.h>
int main()
{
    int T = 0;
    int n = 0;
    int k = 0;
    scanf("%d", &T);
    for (int i = 0;i < T;i++)
    {
        scanf("%d %d", &n, &k);
        for (int i = 1;i < n;i++)
        {
            k = 3 * (1 + k);
        }
        printf("%d\n", k);
    }
    return 0;
}
