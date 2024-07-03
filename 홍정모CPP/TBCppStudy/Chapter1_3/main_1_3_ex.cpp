#include <iostream>

int main_ex() {
	int x = 1;
	x = x + 2;
	std::cout << x << std::endl; // 3

	int y = x;
	std::cout << y << std::endl; // 3

	// is ( x + y ) l-value or r-value?
	std::cout << x + y << std::endl; // 6

	std::cout << x << std::endl; // 3

	int z = 10;
	std::cout << z << std::endl; // 10

	return 0;
}