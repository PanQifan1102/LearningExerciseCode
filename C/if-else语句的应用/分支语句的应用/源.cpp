#include<stdio.h>
int main()
{
	//���֧���
	int age = 80;
	if (age < 18)
		printf("����");
	else if (age >= 18 && age < 26)
		printf("����");
	else if (age >= 26 && age < 60)
		printf("׳��");
	else if (age >= 60 && age < 100)
		printf("����");
	else if (age >= 100)
	    printf("��");

	//�ж�һ�����Ƿ�����
	int num = 13;
	if (num % 2 == 1)
		printf("����");
	else
		printf("������");


	//���1--100֮�������
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
			printf("%d  ",i);
	}
   return 0;
}