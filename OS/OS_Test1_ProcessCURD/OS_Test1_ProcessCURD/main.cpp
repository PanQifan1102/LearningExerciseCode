#define _CRT_SECURE_NO_WARNINGS

// proccreate ��Ŀ
#include <windows.h>
#include <iostream>
#include <stdio.h>

// ������Ϣ����Ҫ�Ŀ�
#include <string>

// �������ݹ����Ľ��̵Ŀ�¡���̲�������IDֵ
void StartClone(int nCloneID) {
	// ��ȡ���ڵ�ǰ��ִ���ļ����ļ���
	TCHAR szFilename[MAX_PATH];
	:: GetModuleFileName(NULL, szFilename, MAX_PATH);

	// ��ʽ�������ӽ��̵������в���֪ͨ�� .EXE �ļ����Ϳ�¡ID
	TCHAR szCmdLine[MAX_PATH];
	// sprintf_s��VS2019Ĭ��ʹ��Unicode�ַ�����Ϊ��֤��������Ӧ��ʹ�ö��ֽ��ַ���
	::sprintf_s(szCmdLine, "\"%s\"%d", szFilename, nCloneID);


	//�����ӽ��̵�STARTUOINFO�ṹ
	STARTUPINFO si;
	::ZeroMemory(reinterpret_cast<void*>(&si), sizeof(si));
	si.cb = sizeof(si);

	// ���ص������ӽ��̵Ľ�����Ϣ
	PROCESS_INFORMATION pi;

	// ����ͬ���Ŀ�ִ���ļ��������д������̣����Ҹ������ӽ��̵�����
	BOOL bCreateOK = ::CreateProcess(
		szFilename,				// �������EXE��Ӧ�ó��������
		szCmdLine,				// ��������Ϊ��һ���ӽ��̵ı�־
		NULL,					// ȱʡ�Ľ��̰�ȫ��
		NULL,					// ȱʡ���̰߳�ȫ��
		FALSE,					// ���̳о伫
		CREATE_NEW_CONSOLE,		// ʹ���µĿ���̨
		NULL,					// �µĻ���
		NULL,					// ��ǰĿ¼
		&si,					// ������Ϣ
		&pi						// ���صĽ�����Ϣ
	);

	// ���ӽ����ͷ�����
	if (bCreateOK) {
		:: CloseHandle(pi.hProcess);
		::CloseHandle(pi.hThread);
	}

}

int main(int argc, char** argv) {
	// ������Ϣ����
	std::string s1 = "202224120121 ";
	std::string s2 = "������";
	std::string str = s1 + s2;

	// ȷ���������б��е�λ��
	int nClone(0);
	if (argc > 1) {
		// �ӵڶ�����������ȡ��¡ID
		::sscanf(argv[1], "%d", &nClone);
	}

	// ��ʾ����λ��
	std::cout << "Process ID:"
		<< ::GetCurrentProcessId()
		<< ", Clone ID:"
		<< nClone
		<< std::endl;

	// ����Ƿ��д����ӽ��̵���Ҫ
	const int C_nCloneMax = 10;
	if (nClone < C_nCloneMax) {
		// ���ѧ�ţ�����
		std::cout << str << std::endl;

		// �����½��̵������кͿ�¡��
		:: Sleep(3000);
		StartClone(++nClone);
	}

	// ����ֹǰ��ͣ��L/2�룩
	::Sleep(60000);

	return 0;
}