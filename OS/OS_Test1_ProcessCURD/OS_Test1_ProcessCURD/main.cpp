#define _CRT_SECURE_NO_WARNINGS

// proccreate 项目
#include <windows.h>
#include <iostream>
#include <stdio.h>

// 个人信息所需要的库
#include <string>

// 创建传递过来的进程的克隆过程并赋予其ID值
void StartClone(int nCloneID) {
	// 提取用于当前可执行文件的文件名
	TCHAR szFilename[MAX_PATH];
	:: GetModuleFileName(NULL, szFilename, MAX_PATH);

	// 格式化用于子进程的命令行并且通知其 .EXE 文件名和克隆ID
	TCHAR szCmdLine[MAX_PATH];
	// sprintf_s，VS2019默认使用Unicode字符集，为保证正常运行应当使用多字节字符集
	::sprintf_s(szCmdLine, "\"%s\"%d", szFilename, nCloneID);


	//用于子进程的STARTUOINFO结构
	STARTUPINFO si;
	::ZeroMemory(reinterpret_cast<void*>(&si), sizeof(si));
	si.cb = sizeof(si);

	// 返回的用于子进程的进程信息
	PROCESS_INFORMATION pi;

	// 利用同样的可执行文件和命令行创建进程，并且赋予其子进程的性质
	BOOL bCreateOK = ::CreateProcess(
		szFilename,				// 产生这个EXE的应用程序的名称
		szCmdLine,				// 告诉其行为像一个子进程的标志
		NULL,					// 缺省的进程安全性
		NULL,					// 缺省的线程安全性
		FALSE,					// 不继承句极
		CREATE_NEW_CONSOLE,		// 使用新的控制台
		NULL,					// 新的环境
		NULL,					// 当前目录
		&si,					// 启动信息
		&pi						// 返回的进程信息
	);

	// 对子进程释放引用
	if (bCreateOK) {
		:: CloseHandle(pi.hProcess);
		::CloseHandle(pi.hThread);
	}

}

int main(int argc, char** argv) {
	// 个人信息配置
	std::string s1 = "202224120121 ";
	std::string s2 = "潘琦藩";
	std::string str = s1 + s2;

	// 确定进程在列表中的位置
	int nClone(0);
	if (argc > 1) {
		// 从第二个参数中提取克隆ID
		::sscanf(argv[1], "%d", &nClone);
	}

	// 显示进程位置
	std::cout << "Process ID:"
		<< ::GetCurrentProcessId()
		<< ", Clone ID:"
		<< nClone
		<< std::endl;

	// 检查是否有创建子进程的需要
	const int C_nCloneMax = 10;
	if (nClone < C_nCloneMax) {
		// 输出学号，姓名
		std::cout << str << std::endl;

		// 发送新进程的命令行和克隆号
		:: Sleep(3000);
		StartClone(++nClone);
	}

	// 在终止前暂停（L/2秒）
	::Sleep(60000);

	return 0;
}