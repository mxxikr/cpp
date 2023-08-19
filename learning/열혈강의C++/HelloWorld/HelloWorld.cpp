#include <iostream> // 헤더 파일 선언문

int main(void)
{
	int num = 20;
	std::cout << "Hello World!" << std::endl; // 출력
	std::cout << "Hello " << "World!" << std::endl; // 개행
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}
