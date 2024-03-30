#include <iostream>

int Addition(int num1, int num2) {
	return num1 + num2;
}

int Subtraction(int num1, int num2) {
	return num1 - num2;
}

int Division(int num1, int num2) {
	return num1 / num2;
}

int Multiplication(int num1, int num2) {
	return num1 * num2;
}

int main() {
	int Scope1, Scope2, Scope3, Scope4, Scope5, Scope6, Scope7, Scope8;

	std::cin >> Scope1;
	std::cin >> Scope2;

	Scope3 = Addition(Scope1, Scope2);
	Scope4 = Subtraction(Scope1, Scope2);
	Scope5 = Division(Scope1, Scope2);
	Scope6 = Multiplication(Scope1, Scope2);

	std::cout << "Scope1 + Scope2 : " << Scope3 << std::endl;
	std::cout << "Scope1 - Scope2 : " << Scope4 << std::endl;
	std::cout << "Scope1 / Scope2 : " << Scope5 << std::endl;
	std::cout << "Scope1 * Scope2 : " << Scope6 << std::endl;

	return 0;
}