#include<stdio.h> //����ͷ�ļ�

int main()
{
	FILE* pFile;
	//���ļ�
	pFile = fopen("myfile.txt", "w");
	//�ļ�����
	if (pFile != NULL)
	{
		fputs("fopen example", pFile);
		//�ر��ļ�
		fclose(pFile);
	}
	return 0;
}



