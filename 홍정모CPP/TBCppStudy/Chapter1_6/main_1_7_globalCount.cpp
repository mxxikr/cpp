#include <iostream>

int globalCount = 0; // ���� ����

void myFunction_globalCount() {
	globalCount++; // ���� ���� ����
	std::cout << "�Լ� �� globalCount: " << globalCount << std::endl;
}

int main_globalCount() {
	std::cout << "�Լ� �ܺ� globalCount: " << globalCount << std::endl; // 0 ���
	myFunction_globalCount();
	std::cout << "�Լ� ȣ�� �� globalCount: " << globalCount << std::endl; // 1 ���

	return 0;
}