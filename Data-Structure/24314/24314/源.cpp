#include<iostream>
int main() {
	int a = 0;
	int& ra = a;

	int b = 0;
	int& rb = ra;
	int& rb = a;
	std::cout << &a << std::endl;
	std::cout << &ra << std::endl;
	std::cout << &rb << std::endl;

	return 0;
}