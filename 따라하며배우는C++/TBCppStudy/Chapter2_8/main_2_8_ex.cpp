#include <iostream>

int main() {
    // 정수 리터럴
    int decimal = 42;
    int octal = 052; // 42 in octal
    int hex = 0x2A;  // 42 in hexadecimal
    int binary = 0b101010; // 42 in binary (C++14)

    // 부동 소수점 리터럴
    double pi = 3.14;
    double scientific = 1.5e3; // 1.5 * 10^3

    // 문자 리터럴
    char letter = 'A';
    char newline = '\n';

    // 문자열 리터럴
    const char* greeting = "Hello, World!";

    // 불리언 리터럴
    bool isTrue = true;
    bool isFalse = false;

    // 널 포인터 리터럴
    int* ptr = nullptr;

    // 출력
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