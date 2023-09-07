#include <iostream>

int main() {
	int Scope1, Scope2, Scope3, Scope4, Scope5, Scope6, Scope7, Scope8;


	std::cin >> Scope1;
	std::cin >> Scope2;


	Scope3 = Scope1 + Scope2;
	Scope4 = Scope1 - Scope2;
	Scope5 = Scope1 * Scope2;
	Scope6 = Scope1 / Scope2;

	std::cout << "Scope3 : " << Scope3 << std::endl;
	std::cout << "Scope4 : " << Scope4 << std::endl;
	std::cout << "Scope5 : " << Scope5 << std::endl;
	std::cout << "Scope6 : " << Scope6 << std::endl;

	return 0;
}