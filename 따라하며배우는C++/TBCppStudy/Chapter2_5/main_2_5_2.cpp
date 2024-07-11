#include <iostream>
#include <iomanip>
// iomanip : 입출력 스트림 조작자를 사용하기 위한 헤더 파일
#include <limits> 
// limits : 데이터 타입의 최솟값과 최댓값을 알아내기 위한 헤더 파일

int main_2()
{
	using namespace std;

	float f(123456789.0f); // 10 significant digits
	cout << std::setprecision(9);
	cout << "f : " << f << endl;

	cout << std::setprecision(16); // 소수점 이하 16자리까지 표현하도록 설정
	cout << 1.0 / 3.0 << endl; // 0.333333 출력


	double d1(0.1);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	cout << "d1 : " << d1 << endl;
	cout << "d2 : " << d2 << endl;
	cout << std::setprecision(17);
	cout << "d1 : " << d1 << endl;
	cout << "d2 : " << d2 << endl;
	return 0;
}