#include <iostream>

/*
* 짝수인지 홀수인지 판별하는 함수
*/
bool isEven(int a)
{
	if (a % 2 == 0)
		return true;
	else
		return false;
}

int main()
{
	std::cout << std::boolalpha;
	std::cout << isEven(10) << std::endl;
	std::cout << isEven(3) << std::endl;
	std::cout << isEven(4) << std::endl;
	std::cout << isEven(9) << std::endl;
	return 0;
}