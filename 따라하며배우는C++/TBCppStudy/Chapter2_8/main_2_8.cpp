#include <iostream>

int main_()
{
	using namespace std;

	float pi = 3.14; // ��� constant : ������ �ʴ� ��
	unsigned int n = 5u;
	long n2 = 5L;
	double d = 6.0e-10; // 6.0 * 10^-10

	// Decimal : 0 1 2 3 4 5 6 7 8 9 10
	// Octal : 0 1 2 3 4 5 6 7 10 11 12 13
	// Hexa : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10 11 12 13
	int x = 012; // 8���� 12
	cout << x << endl; // 10���� 10���� ���

	int y = 0xF; // 16���� F
	cout << y << endl; // 10���� 15�� ���

	int z = 0b1010; // 2���� 1010
	cout << z << endl; // 10���� 10���� ���
	int a = 0b1111'1111'1010;
	cout << a << endl; 

	// ���ͷ� : �ҽ� �ڵ忡 ���� �Է��� ��
	const int price_per_item = 10;
	int num_items = 123;
	//int price = num_items * 10;
	int price = num_items * price_per_item;

	return 0;
}