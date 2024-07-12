#include <iostream>
#include <cctype> // 문자 관련 함수들

int main_ex_2() {
    // char 변수 선언 및 초기화
    char c1 = 'A';
    char c2 = 'b';
    char c3 = '1';

    // char 값 출력
    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c3: " << c3 << std::endl;

    // ASCII 값 출력
    std::cout << "ASCII value of c1: " << static_cast<int>(c1) << std::endl;
    std::cout << "ASCII value of c2: " << static_cast<int>(c2) << std::endl;

    // 문자 변환 함수 사용
    std::cout << "Uppercase of c2: " << static_cast<char>(std::toupper(c2)) << std::endl;
    std::cout << "Lowercase of c1: " << static_cast<char>(std::tolower(c1)) << std::endl;

    // char 배열 (문자열) 선언
    char str[] = "Hello, World!";
    std::cout << "String: " << str << std::endl;

    // 문자열 입력
    char name[50];
    std::cout << "Enter your name: ";
    std::cin.getline(name, 50);
    std::cout << "Your name: " << name << std::endl;

    return 0;
}