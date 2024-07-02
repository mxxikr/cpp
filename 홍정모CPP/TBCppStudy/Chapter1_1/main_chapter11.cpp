#include <iostream> // preprocessor directive

int main() { // main 함수의 몸체
	int x = 2; // 정수형 데이터를 담을 수 있는 메모리 공간 할당
	x = 5; // 변수 x에 리터럴 5를 대입
	int y = x + 3;

	std::cout << y << std::endl;

	return 0; // statement 
}