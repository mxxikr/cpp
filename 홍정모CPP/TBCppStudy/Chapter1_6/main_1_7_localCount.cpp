#include <iostream>

void myFunction_localCount() {
	int localCount = 0; // ���� ����
	std::cout << "�Լ� �� localCount: " << localCount << std::endl; // 0 ���
}

int main_localCount() {
	int globalCount = 10; // ���� ����
	myFunction_localCount(); // localCount ���� ���� �� �ʱ�ȭ

	std::cout << "�Լ� �ܺ� globalCount: " << globalCount << std::endl; // 10 ���
	// localCount ������ main �Լ� ���� ���̹Ƿ� ���� �Ұ�

	return 0;
}