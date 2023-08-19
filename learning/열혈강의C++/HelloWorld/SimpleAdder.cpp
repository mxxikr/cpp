#include <iostream>

int main(void)
{
	int val1;
	std::cout << "첫 번째 숫자 입력: ";
	std::cin >> val1; // 정수 입력 받아 val1에 저장

	int val2;
	std::cout << "두 번째 숫자 입력: ";
	std::cin >> val2; // 정수 입력 받아 val2에 저장

	int result = val1 + val2;
	std::cout << "덧셈 결과: " << result << std::endl;

	return 0;
}