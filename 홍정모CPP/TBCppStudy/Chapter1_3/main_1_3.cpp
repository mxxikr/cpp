#include <iostream>

int main() {
	// x라는 변수가 가리키고 있는 공간에 123이라는 정수를 저장
	int x = 123; // x라는 정수형 변수 선언, initialization(초기화)
	x = x + 3; // assignment(대입)
	
	std::cout << x << std::endl;
	std::cout << &x << std::endl; // 메모리의 주소를 출력

	return 0;
}