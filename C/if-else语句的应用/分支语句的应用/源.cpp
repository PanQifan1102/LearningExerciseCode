#include<stdio.h>
int main()
{
	//多分支语句
	int age = 80;
	if (age < 18)
		printf("少年");
	else if (age >= 18 && age < 26)
		printf("青年");
	else if (age >= 26 && age < 60)
		printf("壮年");
	else if (age >= 60 && age < 100)
		printf("老年");
	else if (age >= 100)
	    printf("神");

	//判断一个数是否奇数
	int num = 13;
	if (num % 2 == 1)
		printf("奇数");
	else
		printf("非奇数");


	//输出1--100之间的奇数
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
			printf("%d  ",i);
	}
   return 0;
}