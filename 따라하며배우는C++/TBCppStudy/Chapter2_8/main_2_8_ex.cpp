#include <iostream>

int main() {
    // ���� ���ͷ�
    int decimal = 42;
    int octal = 052; // 42 in octal
    int hex = 0x2A;  // 42 in hexadecimal
    int binary = 0b101010; // 42 in binary (C++14)

    // �ε� �Ҽ��� ���ͷ�
    double pi = 3.14;
    double scientific = 1.5e3; // 1.5 * 10^3

    // ���� ���ͷ�
    char letter = 'A';
    char newline = '\n';

    // ���ڿ� ���ͷ�
    const char* greeting = "Hello, World!";

    // �Ҹ��� ���ͷ�
    bool isTrue = true;
    bool isFalse = false;

    // �� ������ ���ͷ�
    int* ptr = nullptr;

    // ���
    std::cout << "Decimal: " << decimal << std::endl;
    std::cout << "Octal: " << octal << std::endl;
    std::cout << "Hexadecimal: " << hex << std::endl;
    std::cout << "Binary: " << binary << std::endl;
    std::cout << "Pi: " << pi << std::endl;
    std::cout << "Scientific: " << scientific << std::endl;
    std::cout << "Letter: " << letter << std::endl;
    std::cout << "Greeting: " << greeting << std::endl;
    std::cout << "Is True: " << std::boolalpha << isTrue << std::endl;
    std::cout << "Is False: " << std::boolalpha << isFalse << std::endl;
    std::cout << "Pointer: " << ptr << std::endl;

    return 0;
}