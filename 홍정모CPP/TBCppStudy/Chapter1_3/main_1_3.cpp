#include <iostream>

int main() {
	// x��� ������ ����Ű�� �ִ� ������ 123�̶�� ������ ����
	int x = 123; // x��� ������ ���� ����, initialization(�ʱ�ȭ)
	x = x + 3; // assignment(����)
	
	std::cout << x << std::endl;
	std::cout << &x << std::endl; // �޸��� �ּҸ� ���

	return 0;
}