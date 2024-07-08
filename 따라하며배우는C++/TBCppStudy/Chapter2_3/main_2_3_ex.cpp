#include <cstdint>
#include <iostream>

int main_ex() {
    int8_t smallNumber = -100;      // 부호 있는 8비트 정수
    uint8_t positiveSmallNumber = 200; // 부호 없는 8비트 정수

    int16_t mediumNumber = -20000;  // 부호 있는 16비트 정수
    uint16_t positiveMediumNumber = 40000; // 부호 없는 16비트 정수

    int32_t largeNumber = -1000000000; // 부호 있는 32비트 정수
    uint32_t positiveLargeNumber = 3000000000U; // 부호 없는 32비트 정수

    int64_t veryLargeNumber = -5000000000000000000LL; // 부호 있는 64비트 정수
    uint64_t positiveVeryLargeNumber = 10000000000000000000ULL; // 부호 없는 64비트 정수
        
    std::cout << "smallNumber: " << static_cast<int>(smallNumber) << std::endl; // static_cast : 데이터 타입 변환
    std::cout << "positiveSmallNumber: " << static_cast<unsigned int>(positiveSmallNumber) << std::endl;
    std::cout << "mediumNumber: " << mediumNumber << std::endl;
    std::cout << "positiveMediumNumber: " << positiveMediumNumber << std::endl;
    std::cout << "largeNumber: " << largeNumber << std::endl;
    std::cout << "positiveLargeNumber: " << positiveLargeNumber << std::endl;
    std::cout << "veryLargeNumber: " << veryLargeNumber << std::endl;
    std::cout << "positiveVeryLargeNumber: " << positiveVeryLargeNumber << std::endl;

    return 0;
}
