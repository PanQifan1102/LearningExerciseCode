#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	//Á·Ï°Ò»
	int subject = 0;
	 scanf ("%d", &subject);
	switch (subject)
	{
	case 1:
		printf("chinese");
		break;
	case 2:
		printf("math");
		break;
	case 3:
		printf("english");
		break;
	}
	
	//Á·Ï°¶þ
	int day = 0;
	scanf("%d",& day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
		printf("work");
		break;
	case 4:
	case 5:
		printf("rest");
		break;
	default:
		printf("warning");
		break;
     }

	//Á·Ï°Èý
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{
		case 1:n++;
		case 2:n++, m++;
			break;
		}
	case 4:m++;
		break;
	default:
		break;
	}
	printf("m=%d n=%d\n",n, m);
	return 0;
}