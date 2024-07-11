#include <iostream>
#include <iomanip>
// iomanip : 입출력 스트림 조작자를 사용하기 위한 헤더 파일
#include <limits> 
// limits : 데이터 타입의 최솟값과 최댓값을 알아내기 위한 헤더 파일

int main()
{
	using namespace std;

	float f(3.141592f);
	double d(3.141592);
	long double ld(3.141592);

	cout << sizeof(f) << endl; // float형 변수의 크기 출력
	cout << numeric_limits<float>::max() << endl; // float형 변수의 최댓값 출력
	cout << numeric_limits<float>::min() << endl; // float형 변수의 최솟값 출력 - min : 표현할 수 있는 가장 작은 값의 절대 값
	cout << numeric_limits<float>::lowest() << endl << endl; // float형 변수의 최솟값 출력 - 	// lowest : 표현할 수 있는 가장 작은 값

	cout << sizeof(d) << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<double>::lowest() << endl << endl;

	cout << sizeof(ld) << endl;
	cout << numeric_limits<long double>::max() << endl;
	cout << numeric_limits<long double>::min() << endl; 
	cout << numeric_limits<long double>::lowest() << endl <<endl;

	cout << 3.14 << endl;
	cout << 31.4e-1 << endl; // 3.14 = 31.4 * 0.1
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.4e2 << endl;

	return 0;
}