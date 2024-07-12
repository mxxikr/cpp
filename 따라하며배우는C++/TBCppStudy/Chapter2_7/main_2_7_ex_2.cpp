#include <iostream>
#include <cctype> // ���� ���� �Լ���

int main_ex_2() {
    // char ���� ���� �� �ʱ�ȭ
    char c1 = 'A';
    char c2 = 'b';
    char c3 = '1';

    // char �� ���
    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c3: " << c3 << std::endl;

    // ASCII �� ���
    std::cout << "ASCII value of c1: " << static_cast<int>(c1) << std::endl;
    std::cout << "ASCII value of c2: " << static_cast<int>(c2) << std::endl;

    // ���� ��ȯ �Լ� ���
    std::cout << "Uppercase of c2: " << static_cast<char>(std::toupper(c2)) << std::endl;
    std::cout << "Lowercase of c1: " << static_cast<char>(std::tolower(c1)) << std::endl;

    // char �迭 (���ڿ�) ����
    char str[] = "Hello, World!";
    std::cout << "String: " << str << std::endl;

    // ���ڿ� �Է�
    char name[50];
    std::cout << "Enter your name: ";
    std::cin.getline(name, 50);
    std::cout << "Your name: " << name << std::endl;

    return 0;
}