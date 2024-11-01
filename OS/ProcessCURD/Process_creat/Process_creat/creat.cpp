#include <windows.h>
#include <iostream>
#include <tchar.h>

void RunExe(int number) {
    STARTUPINFO stStartUpInfo;
    ::memset(&stStartUpInfo, 0, sizeof(stStartUpInfo));
    stStartUpInfo.cb = sizeof(stStartUpInfo);

    PROCESS_INFORMATION stProcessInfo;
    ::memset(&stProcessInfo, 0, sizeof(stProcessInfo));

    TCHAR szPath[] = _T("D:\\CodeLib\\LearningExerciseCode\\OS\\Process_1\\Debug\\Process_1.exe");
    TCHAR szCmd[] = _T("1 202224120121_潘琦藩");

    try
    {
        bool bRet = ::CreateProcess(
            szPath,
            szCmd,
            NULL,
            NULL,
            FALSE,
            CREATE_NEW_CONSOLE,
            NULL,
            NULL,
            &stStartUpInfo,
            &stProcessInfo
        );


        if (bRet) {
            printf("Process Created\n");
            printf("202224120121 潘琦藩\n");
            // 等待3s
            for (int i = 3; i >= 0; i--) {
                ::Sleep(1000);
                printf("**%ds**\n", i);
            }
            // 挂起进程
            printf("Suspending Thread....\n");
            ::SuspendThread(stProcessInfo.hThread);
            for (int i = 3; i >= 0; i--) {
                ::Sleep(1000);
                printf("**%ds**\n", i);
            }
            // 恢复进程
            printf("Resume Thread....\n");
            ::ResumeThread(stProcessInfo.hThread);
            for (int i = 3; i >= 0; i--) {
                ::Sleep(1000);
                printf("**%ds**\n", i);
            }
            // 关闭进程
            printf("Terminate Process\n");
            ::TerminateProcess(stProcessInfo.hProcess, -1);
            // 释放句柄
            ::WaitForSingleObject(stProcessInfo.hProcess, 3000);
            ::CloseHandle(stProcessInfo.hProcess);
            ::CloseHandle(stProcessInfo.hThread);
            stProcessInfo.hProcess = NULL;
            stProcessInfo.hThread = NULL;
            stProcessInfo.dwProcessId = 0;
            stProcessInfo.dwThreadId = 0;
        }
        else {
            // 如果创建进程失败，查看错误码
            DWORD dwErrCode = ::GetLastError();
            printf("ErrCode: %d\n", dwErrCode);
        }
    }
    catch (...)
    {
    }
}
int main(int argc, char* argv[]) {
    int nExe = 5;
    RunExe(nExe);
    system("pause");
    return 0;
}
