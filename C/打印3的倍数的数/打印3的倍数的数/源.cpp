/*дһ�������ӡ1-100֮������3�ı���������*/
#include <stdio.h>
int main()
{
	int i = 0;
	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
		i++;
	}
	return 0;
}