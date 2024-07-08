#include <cstdint>
#include <iostream>

int main_ex() {
    int8_t smallNumber = -100;      // ��ȣ �ִ� 8��Ʈ ����
    uint8_t positiveSmallNumber = 200; // ��ȣ ���� 8��Ʈ ����

    int16_t mediumNumber = -20000;  // ��ȣ �ִ� 16��Ʈ ����
    uint16_t positiveMediumNumber = 40000; // ��ȣ ���� 16��Ʈ ����

    int32_t largeNumber = -1000000000; // ��ȣ �ִ� 32��Ʈ ����
    uint32_t positiveLargeNumber = 3000000000U; // ��ȣ ���� 32��Ʈ ����

    int64_t veryLargeNumber = -5000000000000000000LL; // ��ȣ �ִ� 64��Ʈ ����
    uint64_t positiveVeryLargeNumber = 10000000000000000000ULL; // ��ȣ ���� 64��Ʈ ����
        
    std::cout << "smallNumber: " << static_cast<int>(smallNumber) << std::endl; // static_cast : ������ Ÿ�� ��ȯ
    std::cout << "positiveSmallNumber: " << static_cast<unsigned int>(positiveSmallNumber) << std::endl;
    std::cout << "mediumNumber: " << mediumNumber << std::endl;
    std::cout << "positiveMediumNumber: " << positiveMediumNumber << std::endl;
    std::cout << "largeNumber: " << largeNumber << std::endl;
    std::cout << "positiveLargeNumber: " << positiveLargeNumber << std::endl;
    std::cout << "veryLargeNumber: " << veryLargeNumber << std::endl;
    std::cout << "positiveVeryLargeNumber: " << positiveVeryLargeNumber << std::endl;

    return 0;
}
