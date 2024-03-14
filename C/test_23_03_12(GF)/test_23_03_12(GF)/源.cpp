#define _CRT_SECURE_NO_WARNINGS 1
//¢Ù
#include<stdio.h>
#include<math.h>
int main()
{
    double x1, y1, x2, y2, x3, y3;
    double l1, l2, l3;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &x2, &x3, &y1, &y2, &y3);
    l1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    l2 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    l3 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    if (l1 + l2 <= l3 || l1 + l3 <= l2 || l2 + l3 <= l1)
        printf("Impossible");
    else
    {
        double L, A;

        double p;
        L = l1 + l2 + l3;
        p = L / 2;
        A = sqrt(p * (p - l1) * (p - l2) * (p - l3));
        printf("L=%.2fA=%.2F", L, A);
    }
    
    return 0;
}
//¢Ú
#include<stdio.h>
#include<math.h>
int main()
{
    double x1, y1, x2, y2, x3, y3;
    double l1, l2, l3;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    l1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    l2 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    l3 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    if (l1 + l2 <= l3 || l1 + l3 <= l2 || l2 + l3 <= l1)
        printf("Impossible");
    else
    {
        double L, A;
        double p;
        L = l1 + l2 + l3;
        p = L / 2;
        A = sqrt(p * (p - l1) * (p - l2) * (p - l3));
        printf("L=%.2fA=%.2f", L, A);
    }
    return 0;
}