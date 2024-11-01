#define _CRT_SECURE_NO_WARNINGS 1
//小轿车中有一个系统随时监测四个车轮的胎压，
//如果四轮胎压不是很平衡，则可能对行车造成严重的影响。
//让我们把四个车轮 
// —— 左前轮、右前轮、右后轮、左后轮 —— 顺次编号为 1、2、3、4。
// 本题就请你编写一个监测程序，随时监测四轮的胎压，并给出正确的报警信息。
// 报警规则如下：
//->如果所有轮胎的压力值与它们中的最大值误差在一个给定阈值内，
//并且都不低于系统设定的最低报警胎压，则说明情况正常，不报警；
//->如果存在一个轮胎的压力值与它们中的最大值误差超过了阈值，
//或者低于系统设定的最低报警胎压，则不仅要报警，而且要给出
//可能漏气的轮胎的准确位置；
// ->如果存在两个或两个以上轮胎的压力值与它们中的最大值误差超过了阈值，
// 或者低于系统设定的最低报警胎压，则报警要求检查所有轮胎。
//输入格式：
//输入在一行中给出 6 个[0, 400] 范围内的整数，
// 依次为 1~4 号轮胎的胎压、最低报警胎压、以及胎压差的阈值。
//输出格式：
//根据输入的胎压值给出对应信息：
//如果不用报警，输出 Normal；
//如果有一个轮胎需要报警，输出 Warning : please check #X!，其中 X 是出问题的轮胎的编号；
//如果需要检查所有轮胎，输出 Warning : please check all the tires!。


#include<stdio.h>
int main() {
	int i, A, B, C, D, lowest, threshold;
	int MAX = 0, count = 0, a = 0, b = 0, c = 0, d = 0;
	scanf("%d %d %d %d %d %d", &A, &B, &C, &D, &lowest, &threshold);
	if (A > B && A > C && A > D)//最大胎压
	{
		MAX = A;
	}
	else if (B > A && B > C && B > D)
	{
		MAX = B;
	}
	else if (C > A && C > B && C > D)
	{
		MAX = C;
	}
	else
	{
		MAX = D;
	}
	if (MAX - A <= threshold &&
		MAX - B <= threshold &&
		MAX - C <= threshold &&
		MAX - D <= threshold &&
		A >= lowest && 
		B >= lowest && 
		C >= lowest && 
		D >= lowest) 
	{
		printf("Normal");
	}
	//有问题的轮胎
	if (MAX - A > threshold || A < lowest)
	{
		count++;
		a = 1;
	}
	if (MAX - B > threshold || B < lowest)
	{
		count++;
		b = 2;
	}
	if (MAX - C > threshold || C < lowest)
	{
		count++;
		c = 3;
	}
	if (MAX - D > threshold || D < lowest)
	{
		count++;
		d = 4;
	}
	if (count >= 2) 
	{
		printf("Warning: please check all the tires!");
	}
	else if (count < 2 && count != 0) 
	{
		if (a == 1) {
			printf("Warning: please check #%d!", a);
		}
		else if (b == 2) {
			printf("Warning: please check #%d!", b);
		}
		else if (c == 3) {
			printf("Warning: please check #%d!", c);
		}
		else
			printf("Warning: please check #%d!", d);
	}
	return 0;
}
