#include<stdio.h>
#include<string.h>
char* fun(char a[]);
int main()
{
	FILE* fp;
	fp = fopen("zifu.txt", "r");
	char t[20];
	fgets(t, 11, fp);
	fclose(fp);
	fp = fopen("jieguo.txt", "w");
	fputs(fun(t), fp);
	return 0;
}
char* fun(char a[]) {
	int i, j;
	for (j = 2;j < strlen(a);j += 4) {
		for (i = 0;10 - i > j + 1;i++) {
			a[10 - i] = a[9 - i];
		}
		a[j + 1] = '*';
	}
	return a;
}