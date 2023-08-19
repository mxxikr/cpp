#include <iostream>

int main(void)
{
	int val1, val2;
	int result = 0;
	std::cout << "두 개의 숫자 입력: ";
	std::cin >> val1 >> val2; // 두 개의 정수를 입력 받아 val1, val2에 순서대로 저장

	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++) // for문 안에 변수 선언 가능
			result += i;
	}
	else {
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}

	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
	return 0;
}