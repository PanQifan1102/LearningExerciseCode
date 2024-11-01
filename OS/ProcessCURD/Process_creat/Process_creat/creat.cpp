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
    TCHAR szCmd[] = _T("1 202224120121_������");

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
            printf("202224120121 ������\n");
            // �ȴ�3s
            for (int i = 3; i >= 0; i--) {
                ::Sleep(1000);
                printf("**%ds**\n", i);
            }
            // �������
            printf("Suspending Thread....\n");
            ::SuspendThread(stProcessInfo.hThread);
            for (int i = 3; i >= 0; i--) {
                ::Sleep(1000);
                printf("**%ds**\n", i);
            }
            // �ָ�����
            printf("Resume Thread....\n");
            ::ResumeThread(stProcessInfo.hThread);
            for (int i = 3; i >= 0; i--) {
                ::Sleep(1000);
                printf("**%ds**\n", i);
            }
            // �رս���
            printf("Terminate Process\n");
            ::TerminateProcess(stProcessInfo.hProcess, -1);
            // �ͷž��
            ::WaitForSingleObject(stProcessInfo.hProcess, 3000);
            ::CloseHandle(stProcessInfo.hProcess);
            ::CloseHandle(stProcessInfo.hThread);
            stProcessInfo.hProcess = NULL;
            stProcessInfo.hThread = NULL;
            stProcessInfo.dwProcessId = 0;
            stProcessInfo.dwThreadId = 0;
        }
        else {
            // �����������ʧ�ܣ��鿴������
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
