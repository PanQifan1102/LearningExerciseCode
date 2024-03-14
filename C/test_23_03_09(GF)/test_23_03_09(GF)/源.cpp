#define _CRT_SECURE_NO_WARNINGS 1
////1.
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int num, indiv, ten, hundred, thousand, ten_thousand, place;
//    printf("请输入一个整数（0~99999）：");
//    scanf("%d", &num);
//    if (num > 9999)
//        place = 5;
//    else if (num > 999)
//        place = 4;
//    else if (num > 99)
//        place = 3;
//    else if (num > 9)
//        place = 2;
//    else place = 1;
//    printf("位数：%d\n", place);
//    printf("每位数字为：");
//    ten_thousand = num / 10000;
//    thousand = (int)(num - ten_thousand * 10000) / 1000;
//    hundred = (int)(num - ten_thousand * 10000 - thousand * 1000) / 100;
//    ten = (int)(num - ten_thousand * 10000 - thousand * 1000 - hundred * 100) / 10;
//    indiv = (int)(num - ten_thousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10);
//    switch (place)
//    {
//    case 5:printf("%d,%d,%d,%d,%d", ten_thousand, thousand, hundred, ten, indiv);
//        printf("\n反序数字为：");
//        printf("%d%d%d%d%d\n", indiv, ten, hundred, thousand, ten_thousand);
//        break;
//    case 4:printf("%d,%d,%d,%d", thousand, hundred, ten, indiv);
//        printf("\n反序数字为：");
//        printf("%d%d%d%d\n", indiv, ten, hundred, thousand);
//        break;
//
//    case 3:printf("%d,%d,%d", hundred, ten, indiv);
//        printf("\n反序数字为：");
//        printf("%d%d%d\n", indiv, ten, hundred);
//        break;
//    case 2:printf("%d,%d", ten, indiv);
//        printf("\n反序数字为：");
//        printf("%d%d\n", indiv, ten);
//        break;
//    case 1:printf("%d", indiv);
//        printf("\n反序数字为：");
//        printf("%d\n", indiv);
//        break;
//    }
//    return 0;
//}
//
////2.
//#include<stdio.h>
//
//int main()
//{
//    int t, a, b, c, d;
//    printf("请输入四个整数：");
//    scanf("%d,%d,%d,%d", &a, &b, &c, &d);
//    if (a > b)
//    {
//        t = a;
//        a = b;
//        b = t;
//    }
//    if (a > c)
//    {
//        t = a;
//        a = c;
//        c = t;
//    }
//    if (a > d)
//    {
//        t = a;
//        a = d;
//        d = t;
//    }
//    if (b > c)
//    {
//        t = b;
//        b = c;
//        c = t;
//    }
//    if (b > d)
//    {
//        t = b;
//        b = d;
//        d = t;
//    }
//    if (c > d)
//    {
//        t = c;
//        c = d;
//        d = t;
//    }
//    printf("排序结果如下：\n");
//    printf("%d %d %d %d\n", a, b, c, d);
//
//    return 0;
//}


////3.
//#include<stdio.h>
//int main()
//{
//    int h = 10;
//    float x1 = 2, y1 = 2, x2 = -2, y2 = 2, x3 = -2, y3 = -2, x4 = 2, 
//          y4 = -2, x, y, d1, d2, d3, d4;
//
//    printf("请输入一个点(x,y):");
//    scanf("%f %f", &x, &y);
//    d1 = (x - x4) * (x - x4) + (y - y4) * (y - y4);
//    d2 = (x - x1) * (x - x1) + (y - y1) * (y - y1);
//    d3 = (x - x2) * (x - x2) + (y - y2) * (y - y2);
//    d4 = (x - x3) * (x - x3) + (y - y3) * (y - y3);
//    if (d1 > 1 && d2 > 1 && d3 > 1 && d4 > 1) 
//        h = 0;
//    printf("该点高度为%d\n", h);
//    return 0;
//}
