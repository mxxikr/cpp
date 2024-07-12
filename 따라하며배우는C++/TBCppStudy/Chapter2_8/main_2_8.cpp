#include <iostream>

int main_()
{
	using namespace std;

	float pi = 3.14; // 상수 constant : 변하지 않는 값
	unsigned int n = 5u;
	long n2 = 5L;
	double d = 6.0e-10; // 6.0 * 10^-10

	// Decimal : 0 1 2 3 4 5 6 7 8 9 10
	// Octal : 0 1 2 3 4 5 6 7 10 11 12 13
	// Hexa : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10 11 12 13
	int x = 012; // 8진수 12
	cout << x << endl; // 10진수 10으로 출력

	int y = 0xF; // 16진수 F
	cout << y << endl; // 10진수 15로 출력

	int z = 0b1010; // 2진수 1010
	cout << z << endl; // 10진수 10으로 출력
	int a = 0b1111'1111'1010;
	cout << a << endl; 

	// 리터럴 : 소스 코드에 직접 입력한 값
	const int price_per_item = 10;
	int num_items = 123;
	//int price = num_items * 10;
	int price = num_items * price_per_item;

	return 0;
}