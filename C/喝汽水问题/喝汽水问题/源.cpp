#define _CRT_SECURE_NO_WARNINGS 1
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以喝多少汽水（编程实现）。

#include <stdio.h>
int main()

{
	int money = 20;  
	int price = 1;    
	int soda = money / price;    
	int exchange = soda;     
	do
	{
		if (exchange % 2 == 0) 
		{
			exchange = exchange / 2;
			soda = exchange + soda;
		}                    
		else
		{
			exchange = exchange / 2 + 1;
			soda = soda + exchange - 1;
		}
	} while (exchange != 1);
	printf("你可以喝%d瓶汽水！\n", soda);
	return 0;
}