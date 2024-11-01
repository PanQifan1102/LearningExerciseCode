#include <stdio.h>
#include <windows.h>

////修改文本内容所需要的库
//#include <string>
//#include <iostream>

int main(int argc, char* argv[]) {
	printf("%s\n %s\n", GetCommandLine(), argv[1]);

	//// 通过字符串函数进行多字符串的拼接
	//std::string s1 = "202224120121 ";
	//std::string s2 = "潘琦藩";
	//std::string str = s1 + s2;


	while (1) {
		Sleep(1000);
		/*std::cout << str << std::endl;*/
	}
	return 0;
}


