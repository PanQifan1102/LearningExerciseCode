#include<stdio.h>
int main() {
	int x = 0;
	int y = 0;
	/*for (x = 30, y = 0; x >= 10, y < 10; x--, y++) {
		x /= 2, y += 2;
		
	}*/
	int z = (x += 1, y += 3);
	printf("%d %d %d\n", x, y,z);
	return 0;
}
