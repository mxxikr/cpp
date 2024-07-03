#include <iostream>

int globalCount = 0; // 전역 변수

void myFunction_globalCount() {
	globalCount++; // 전역 변수 변경
	std::cout << "함수 내 globalCount: " << globalCount << std::endl;
}

int main_globalCount() {
	std::cout << "함수 외부 globalCount: " << globalCount << std::endl; // 0 출력
	myFunction_globalCount();
	std::cout << "함수 호출 후 globalCount: " << globalCount << std::endl; // 1 출력

	return 0;
}