#include <stdio.h>
#include <windows.h>

////�޸��ı���������Ҫ�Ŀ�
//#include <string>
//#include <iostream>

int main(int argc, char* argv[]) {
	printf("%s\n %s\n", GetCommandLine(), argv[1]);

	//// ͨ���ַ����������ж��ַ�����ƴ��
	//std::string s1 = "202224120121 ";
	//std::string s2 = "������";
	//std::string str = s1 + s2;


	while (1) {
		Sleep(1000);
		/*std::cout << str << std::endl;*/
	}
	return 0;
}


