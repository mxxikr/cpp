/*
* ���� 1.
* ����ڷκ��� �� 5���� ������ �Է� �޾Ƽ�, �� ���� ����ϴ� ���α׷��� �ۼ��� ����.
* �� ���α׷��� ������ ������ ���� �̷������ �Ѵ�.
*/

#include <iostream>

void question_1() {
	int val1, val2, val3, val4, val5;

	std::cin >> val1 >> val2 >> val3 >> val4 >> val5;
	std::cout << "1��° ���� �Է�: " << val1 << std::endl;
	std::cout << "2��° ���� �Է�: " << val2 << std::endl;
	std::cout << "3��° ���� �Է�: " << val3 << std::endl;
	std::cout << "4��° ���� �Է�: " << val4 << std::endl;
	std::cout << "5��° ���� �Է�: " << val5 << std::endl;

	std::cout << "�հ�: " << val1 + val2 + val3 + val4 + val5 << std::endl;
};

int main() {
	question_1();
	return 0;
}
