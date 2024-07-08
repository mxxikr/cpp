#include <iostream>
#include <cmath> 
// cmath : 수학 함수를 제공하는 헤더 파일
#include <limits>
// limits : 데이터 타입의 최솟값과 최댓값을 제공하는 헤더 파일

int main()
{
	using namespace std;
	
	short s = 1;
	int i = 1;
	long l = 1;
	long long ll = 1;

	cout << sizeof(short) << endl; // 2 bytes = 2 * 8 bits = 16 bits
	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl; // (2^16 - 1(부호 비트)) - 1(0을 표현) = 32767
	cout << std::numeric_limits<short>::max() << endl; // 데이터형의 최댓 값 출력
	cout << std::numeric_limits<short>::min() << endl; // 데이터형의 최솟	값 출력
	cout << std::numeric_limits<short>::lowest() << endl; // 데이터형의 최솟 값 출력


	cout << sizeof(int) << endl; //	4 bytes = 2 * 4 bits = 32 bits
	cout << sizeof(long) << endl; // 4바이트
	cout << sizeof(long long) << endl; // 8바이트

	s = numeric_limits<short>::min();
	//s = s + 1; // 32767 ( ++s, s++, s += 1, s = s + 1)
	s = s - 1; // 32767 ( --s, s--, s -= 1, s = s - 1)

	cout << s << endl; // overflow 현상 발생
	unsigned int k = -1; // unsigned 정수형 변수에 -1을 대입하면 최댓값이 저장됨
	cout << std::numeric_limits<unsigned int>::max() << endl;
	cout << k << endl;

	cout << 22 / 4 << endl; // 5 출력 -> 정수 나누기 정수는 정수로 저장
	cout << (float)22 / 4 << endl; // 5.5 출력 -> 실수 나누기 정수는 실수로 저장

	return 0;
}