#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[]) {
	printf("%s\n %s\n", GetCommandLine(), argv[1]);
	while (1) {
		Sleep(1000);
		printf("hello!\n");
	}
}
