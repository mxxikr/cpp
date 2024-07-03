#include <iostream>

int calculator(int x, int y, std::string z) {
	int result = 0;
	if (z == "+") {
		result = x + y;
	}
	else if (z == "-") {
		result = x - y;
	}
	else if (z == "*") {
		result = x * y;
	}
	else if (z == "/") {
		result = x / y;
	}
	else if (z == "%") {
		result = x % y;
	}
	else {
		std::cout << "Invalid value" << std::endl;
		return 0;
	}

	std::cout << x << " " << z << " " << y << " = " << result << std::endl;
}

int main_ex() {
	calculator(1, 2, "+");
	calculator(3, 4, "-");
	calculator(8, 13, "*");
	calculator(10, 2, "/");	
	calculator(10, 2, "%");	
}
