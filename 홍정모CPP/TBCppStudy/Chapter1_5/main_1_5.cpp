#include <iostream>

using namespace std;

void print()
{
	cout << "Hello" << endl;
}

int addTwoNumbers(int num_a, int num_b)
{
	int sum = num_a + num_b;

	return sum;
}

int multiplyTwoNumbers(int num_a, int num_b)
{
	int multiply = num_a * num_b;

	return multiply;
}

void printHelloWorld() { // return할 값이 없을 경우 void 사용
	cout << "Hello World!" << endl;
	print();
	return;
}

int main()
{
	cout << multiplyTwoNumbers(1, 2) << endl; // argrument(인자) 입력
	cout << multiplyTwoNumbers(3, 4) << endl;
	cout << multiplyTwoNumbers(8, 13) << endl;
	printHelloWorld();

	return 0;
}