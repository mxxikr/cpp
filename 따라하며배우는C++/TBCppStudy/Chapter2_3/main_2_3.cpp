#include <iostream>
#include <cstdint> 
// cstdint : 고정 너비 정수를 제공하는 헤더 파일

int  main()
{
	using namespace std;
	// 고정 너비 정수 : 데이터 타입의 크기를 정확히 지정하는 정수형 데이터 타입
	std::int16_t i(5); // 16bits = 2 bytes 데이터로 변경
	std::int8_t myint = 65; // 8bits = 1 byte 데이터로 변경

	cout << myint << endl; // char형으로 출력

	std::int_fast8_t fi(5); // 8bits = 1 byte 데이터로 변경
	std::int_least64_t fl(5); // 64bits = 8 bytes 데이터로 변경

	return 0;
}