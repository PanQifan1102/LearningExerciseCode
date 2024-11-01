#include <windows.h>
#include <stdio.h>
#include <tchar.h>

void RunExe(int number) {
	STARTUPINFO stStartUpInfo;
	::memset(&stStartUpInfo, 0, sizeof(stStartUpInfo));
	stStartUpInfo.cb = sizeof(stStartUpInfo);

	PROCESS_INFORMATION stProcessInfo;
	::memset(&stProcessInfo, 0, sizeof(stProcessInfo));

	TCHAR szPath[] = _T("D:\CodeLib\LearningExerciseCode\OS\Test_1\Debug\Test_1.exe");
	TCHAR szCmd[] = _T("2 123 123");

	try {
		bool bRet = ::CreateProcess(
			szPath,
			szCmd,
			NULL,
			NULL,
			false,
			CREATE_NEW_CONSOLE,
			NULL,
			NULL,
			&stStartUpInfo,
			&stProcessInfo
		);

		if (bRet) {
			printf("Process Created\n");
			// 等待三秒
			for (int i = 3; i >= 0; i--) {
				::Sleep(1000);
				printf("**%ds**\n", i);
			}
			// 挂起进程
			printf("Suspending Thread....\n");
			::SuspendThread(stProcessInfo.hThread);
			for (int i = 3; i >= 0; i--) {
				::Sleep(1000);
				printf("**%d**\n", i);
			}
			// 关闭进程
			printf("Terminate Process\n");
			::TerminateProcess(stProcessInfo.hProcess, -1);
			// 释放句柄
			WaitForSingleObject(stProcessInfo.hProcess, 3000);
			::CloseHandle(stProcessInfo.hProcess);
			::CloseHandle(stProcessInfo.hThread);
			stProcessInfo.hProcess = NULL;
			stProcessInfo.hThread = NULL;
			stProcessInfo.dwProcessId = 0;
			stProcessInfo.dwThreadId = 0;
		}
		else
		{
			// 如果创建进程失败，查看错误代码
			DWORD dwErrcode = GetLastError();
			printf("ErrCode: %d\n", dwErrcode);
		}
	}
	catch (...) {

	}
}

int main(int argc, char* argv[]) {
	RunExe(5);

	system("pause");
	return 0;
}