#include <iostream>

/*
* 문제 1.
* 사용자로부터 총 5개의 정수를 입력 받아서, 그 합을 출력하는 프로그램을 작성해 보자.
* 단 프로그램의 실행은 다음과 같이 이루어져야 한다.
*/
void question_1() {
	int val1, val2, val3, val4, val5;

	std::cin >> val1 >> val2 >> val3 >> val4 >> val5;
	std::cout << "1번째 정수 입력: " << val1 << std::endl;
	std::cout << "2번째 정수 입력: " << val2 << std::endl;
	std::cout << "3번째 정수 입력: " << val3 << std::endl;
	std::cout << "4번째 정수 입력: " << val4 << std::endl;
	std::cout << "5번째 정수 입력: " << val5 << std::endl;

	std::cout << "합계: " << val1 + val2 + val3 + val4 + val5 << std::endl;
};

/*
* 문제 2.
* 프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서, 입력받은 데이터를 그대로 출력하는 프로그램을 작성해보자.
*/
void question_2() {
	char name[100];
	char phone_number[200];

	std::cin >> name >> phone_number;
	std::cout << "이름: " << name << std::endl;
	std::cout << "휴대폰 번호: " << phone_number << std::endl;
};


/*
* 문제 3.
* 숫자 하나를 입력 받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성해 보자.
* 예를 들어 사용자가 5를 입력한다면 구구단에서 5단을 출력해야한다.
*/
void question_3() {
	int gugu;

	std::cin >> gugu;

	for (int num = 1; num <= gugu; num++) {
		std::cout << gugu << " * " << num << " = " << gugu * num << std::endl;
	}
};

int main() {
	question_1();
	question_2();
	question_3();
	return 0;
}
