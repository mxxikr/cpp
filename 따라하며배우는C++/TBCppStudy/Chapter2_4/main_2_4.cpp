#include <iostream>

// 아무런 기능이 없는 빈 함수 정의
void my_function()
{

}

int main()
{
	// int 형 변수 i 선언 및 초기화
	int i = 123;

	// float 형 변수 f 선언 및 초기화
	float f = 123.456f;

	// void 포인터 변수 선언, void 포인터는 어떤 데이터 타입의 주소든 저장 가능
	void* my_void;

	// void 포인터에 정수형 변수 i의 주소를 저장
	my_void = (void*)&i;
	std::cout << my_void << std::endl; // i가 저장된 메모리 위치 출력

	// void 포인터에 실수형 변수 f의 주소를 저장
	my_void = (void*)&f;
	std::cout << my_void << std::endl; // f가 저장된 메모리 위치 출력

	// 데이터 타입이나 사이즈가 다르더라도 데이터의 주소를 저장하는데 필요한 공간은 동일하다.

	return 0;
}
