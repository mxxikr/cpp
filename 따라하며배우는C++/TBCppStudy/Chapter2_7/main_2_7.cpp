#include <iostream>
#include <limits>

int main()
{

	using namespace std;
	
	char c1(65); 
	char c2('A'); // 문자 하나 표현할 때는 single quotation(작은 따옴표) 사용

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;
	
	// c style casting
	cout << (char)65 << endl; // A
	cout << (int)'A' << endl; // 65

	// c++ style casting
	cout << char(65) << endl; // A
	cout << int('A') << endl; // 65

	// static_cast - 강제로 변환하지 않는 안전한 casting 방법, 원래 변수에 있는 값을 바꾸지는 않음
	cout << static_cast<char>(65) << endl; // A
	cout << static_cast<int>('A') << endl; // 65

	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl; // static_cast에 변수 사용 가능
	cout << ch << endl;

	char c3(65); // 한글자만 받을 수 있는 사이즈

	cin >> c3;
	cout << c3 << " " << static_cast<int>(c3) << endl; // 여러 글자 입력해도 첫 글자만 받음
	// 나머지 글자는 버퍼에 남아있음
	cin >> c3;
	cout << c3 << " " << static_cast<int>(c3) << endl; // 나머지 글자 받음

	cin >> c3;
	cout << c3 << " " << static_cast<int>(c3) << endl;

	cin >> c3; // 버퍼에 남아있는 글자가 없어서 입력 대기
	cout << c3 << " " << static_cast<int>(c3) << endl;

	// escape sequence : 특수한 문자를 출력할 때 사용
	cout << sizeof(char) << endl;
	cout << (int)std::numeric_limits<char>::max() << endl; // 모든 아스키 캐릭터가 모든 아스키 문자를 화면에 출력할 수 없음
	cout << (int)std::numeric_limits<char>::lowest() << endl;

	cout << sizeof(unsigned char) << endl; // 양수 값만 표현할 수 있음
	cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;

	// \n : 줄바꿈 문자, endl : 줄바꿈과 동시에 cout 버퍼에 있는 것을 전부 출력
	cout << "This is first line \nThis is second line" << endl;
	cout << "This is first line " << endl;
	cout << "This is second line" << endl;
	cout << "This is first line " << std::flush; // 줄바꿈 없이 cout 버퍼에 있는 것을 출력
	cout << int('\n') << endl; // 10 : new line
	cout << int('\t') << endl; // 9 : tab
	cout << "This is first line \tThis is second line" << endl;
	cout << "\"This is first line\? \a \tThis is second line\"" << endl;

	wchar_t c;
	char32_t c4; // 유니코드 문자를 표현할 때 사용

	return 0;
}