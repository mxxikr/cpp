#include <iostream>

void myFunction_localCount() {
	int localCount = 0; // 지역 변수
	std::cout << "함수 내 localCount: " << localCount << std::endl; // 0 출력
}

int main_localCount() {
	int globalCount = 10; // 전역 변수
	myFunction_localCount(); // localCount 변수 생성 및 초기화

	std::cout << "함수 외부 globalCount: " << globalCount << std::endl; // 10 출력
	// localCount 변수는 main 함수 범위 밖이므로 접근 불가

	return 0;
}