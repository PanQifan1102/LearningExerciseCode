#define _CRT_SECURE_NO_WARNINGS 1
//用C语言在屏幕上输出以下图案：
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *

#include<stdio.h>
//打印菱形
int main() {
	int n;	//上半部分行数
	scanf("%d", &n);
	//上半部分：
	for (int i = 1; i <= n; i++) {	//行数做循环条件
		//1、打印空格
		for (int j = 0; j < n - i; j++) {
			printf(" ");
		}
		//2、打印*号
		for (int j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
		//3、没打印完一排换行
		printf("\n");
	}
	//下半部分：
	for (int i = 1; i <= n - 1; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * (n - 1 - i) + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}