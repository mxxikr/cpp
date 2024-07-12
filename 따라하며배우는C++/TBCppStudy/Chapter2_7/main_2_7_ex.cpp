#include <iostream>
#include <sstream>  // sstream : 문자열스트림을 사용하기 위한 헤더 파일
#include <iomanip> // iomanip : 입출력 조작 위한 헤더파일

/*
* ASCII Table에 있는 여러가지 문자들을 cin, cout으로 입출력하기
*/

// 숫자를 문자로 변환 함수
char intToChar(int i)
{
	return static_cast<char>(i);
}

// 정수를 16진수로 변환하는 함수
std::string intToHex(int i)
{
	std::stringstream ss; // 문자열 스트림 객체 생성
	ss << std::hex << std::uppercase << i; // 스트림에 16진수 형식으로 변환된 정수 추가
	// std::hex 16진수 형식으로 변환하기 위한 조작자, std::uppercase 16진수 문자를 대문자로 변환하기 위한 조작자
	return ss.str(); // 스트림에 있는 문자열을 반환
}

int main_ex() {
	using namespace std;

	// 0 ~ 127까지 전부 출력
	for (int i = 0; i < 128; i++)
	{	
		cout << "Decimal : " << i << ", Char : " << intToChar(i) << ", Hex : " << intToHex(i) << endl;
	}

	// 사용자로부터 입력받은 숫자를 문자와 16진수로 변환
	int i;
	cin >> i;
	cout << "Decimal : " << i << ", Char : " << intToChar(i) << ", Hex : " << intToHex(i) << endl;

	return 0;
}