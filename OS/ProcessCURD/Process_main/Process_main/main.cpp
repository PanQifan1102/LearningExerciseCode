#define _CRT_SECURE_NO_WARNINGS


// proccreate ��Ŀ

# include <windows.h>
# include <iostream>
# include <stdio.h>

void StartClone(int nCloneID) {
    // ��ȡ���ڵ�ǰ��ִ���ļ����ļ���
    TCHAR szFilename[MAX_PATH];
    :: GetModuleFileName(NULL, szFilename, MAX_PATH);

    // ��ʽ�����ڴ�����������������test.exe �ļ��Ϳ�¡ID
    TCHAR szCmdLine[MAX_PATH];
    :: sprintf(szCmdLine, "%s %d", szFilename, nCloneID);

    // �����ӽ��̵�STARTUPINFO�ṹ
    STARTUPINFO si;
    :: ZeroMemory(reinterpret_cast<void*>(&si), sizeof(si));
    si.cb = sizeof(si); // �����ǽṹ��Ĵ�С

    // ���������ӽ��̵�PROCESS_INFORMATION�ṹ
    PROCESS_INFORMATION pi;

    BOOL bCreateOK = :: CreateProcess(
        szFilename,          // ��������
        szCmdLine,           // �����в���, �����ӽ���ID
        NULL,                // ָ����̰�ȫ����
        NULL,                // ָ���̰߳�ȫ����
        FALSE,               // �̳о����ʶ
        CREATE_NEW_CONSOLE,  // �����µĿ���̨
        NULL,                // ʹ�ø����̻���
        NULL,                // ʹ�ø����̵�ǰĿ¼
        &si,                 // ָ��������Ϣ��ָ��
        &pi);                // ָ�������Ϣ��ָ��

    // ���ڽ����ͷ�����
    if (bCreateOK) {
        :: CloseHandle(pi.hProcess);
        :: CloseHandle(pi.hThread);
    }
}

int main(int argc, char** argv) {
    // ȷ���������б��е�λ��
    int nClone(0);
    if (argc > 1) {
        // �ӵڶ�����������ȡ��¡ID
        :: sscanf(argv[1], "%d", &nClone);
    }

    // ��ʾ����λ��
    std :: cout << "Process ID: "
                << :: GetCurrentProcessId()
                << ", Clone ID: "
                << nClone
                << std :: endl;

    // ����Ƿ��д����ӽ��̵���Ҫ
    const int C_nCloneMax = 10;
    if (nClone < C_nCloneMax) {
        // �����½��̵������кͿ�¡��
        printf("202224120121");
        :: Sleep(3000);
        printf(" ������");
        StartClone(++nClone);
    }

    // ����ֹ֮ǰ��ͣһ�� (L/2��)
    :: Sleep(60000);
}
