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

void printHelloWorld() { // return�� ���� ���� ��� void ���
	cout << "Hello World!" << endl;
	print();
	return;
}

int main()
{
	cout << multiplyTwoNumbers(1, 2) << endl; // argrument(����) �Է�
	cout << multiplyTwoNumbers(3, 4) << endl;
	cout << multiplyTwoNumbers(8, 13) << endl;
	printHelloWorld();

	return 0;
}