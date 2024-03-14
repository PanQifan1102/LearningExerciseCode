#define _CRT_SECURE_NO_WARNINGS 1
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
#include<stdio.h>

#include <stdio.h>
int main()
{
	int A = 0, B = 0, C = 0, D = 0;
	int FD;//因为c和d的供词刚好对立 表示对立的
	int i;
	for (i = 1; i <= 4; i++)
	{

		if (i == 1)//A说的假
		{
			A = 1;C = 1;FD = 1;D = 0;
		}
		if (i == 2)//B说的假
		{
			A = 0;C = 0;FD = 1;D = 0;
		}
		if (i == 3)//C说的假
		{
			A = 0;C = 1;FD = 0;D = 0;
		}
		if (i == 4)//D的说的假
		{
			A = 0;C = 1;FD = 1;D = 0;
		}
		if (A + B + C + D + FD == 1 && FD == D)//只有一个人是凶手 当和为1时一个凶手出现  
			                                   //因为CD供词推出的都是D是不是 与上FD==D
			                                   //是为了排除D是D不是的情况 
			printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
	}
	return 0;
}