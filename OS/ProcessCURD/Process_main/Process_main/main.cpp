#define _CRT_SECURE_NO_WARNINGS


// proccreate 项目

# include <windows.h>
# include <iostream>
# include <stdio.h>

void StartClone(int nCloneID) {
    // 提取用于当前可执行文件的文件名
    TCHAR szFilename[MAX_PATH];
    :: GetModuleFileName(NULL, szFilename, MAX_PATH);

    // 格式化用于创建命令行命令行如test.exe 文件和克隆ID
    TCHAR szCmdLine[MAX_PATH];
    :: sprintf(szCmdLine, "%s %d", szFilename, nCloneID);

    // 用于子进程的STARTUPINFO结构
    STARTUPINFO si;
    :: ZeroMemory(reinterpret_cast<void*>(&si), sizeof(si));
    si.cb = sizeof(si); // 必须是结构体的大小

    // 返回用于子进程的PROCESS_INFORMATION结构
    PROCESS_INFORMATION pi;

    BOOL bCreateOK = :: CreateProcess(
        szFilename,          // 父进程名
        szCmdLine,           // 命令行参数, 包括子进程ID
        NULL,                // 指向进程安全属性
        NULL,                // 指向线程安全属性
        FALSE,               // 继承句柄标识
        CREATE_NEW_CONSOLE,  // 创建新的控制台
        NULL,                // 使用父进程环境
        NULL,                // 使用父进程当前目录
        &si,                 // 指向启动信息的指针
        &pi);                // 指向进程信息的指针

    // 对于进程释放引用
    if (bCreateOK) {
        :: CloseHandle(pi.hProcess);
        :: CloseHandle(pi.hThread);
    }
}

int main(int argc, char** argv) {
    // 确定进程在列表中的位置
    int nClone(0);
    if (argc > 1) {
        // 从第二个参数中提取克隆ID
        :: sscanf(argv[1], "%d", &nClone);
    }

    // 显示进程位置
    std :: cout << "Process ID: "
                << :: GetCurrentProcessId()
                << ", Clone ID: "
                << nClone
                << std :: endl;

    // 检查是否有创建子进程的需要
    const int C_nCloneMax = 10;
    if (nClone < C_nCloneMax) {
        // 发送新进程的命令行和克隆号
        printf("202224120121");
        :: Sleep(3000);
        printf(" 潘琦藩");
        StartClone(++nClone);
    }

    // 在终止之前暂停一下 (L/2秒)
    :: Sleep(60000);
}
