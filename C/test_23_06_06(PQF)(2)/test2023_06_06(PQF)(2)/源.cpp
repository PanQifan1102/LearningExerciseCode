#include<stdio.h> //引用头文件

int main()
{
	FILE* pFile;
	//打开文件
	pFile = fopen("myfile.txt", "w");
	//文件操作
	if (pFile != NULL)
	{
		fputs("fopen example", pFile);
		//关闭文件
		fclose(pFile);
	}
	return 0;
}



