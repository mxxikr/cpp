#include <iostream>

int main(void)
{
	char name[100];
	char lang[200];

	std::cout << "�̸��� �����Դϱ�? ";
	std::cin >> name; // �迭�� ���ڿ� ����

	std::cout << "�����ϴ� ���α׷��� ���� �����ΰ���?  ";
	std::cin >> lang; // �迭�� ���ڿ� ����

	std::cout << "���̸��� " << name << "�Դϴ�.\n"; // std::endl�� ���� ���� ����
	std::cout << "���� �����ϴ� ���� " << lang << "�Դϴ�." << std::endl;
	return 0;
}