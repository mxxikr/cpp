#include <iostream>
#include <cmath>
// cmath : 수학 함수를 사용하기 위한 헤더 파일


int main_3() {

	using namespace std;

	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << " " << std::isinf(posinf) << endl; // 무한대일 경우 1
	cout << neginf << " " << std::isinf(neginf) << endl; // 무한대일 경우 1
	cout << nan << " " << std::isnan(nan) << endl; // nan일 경우 1
	cout << 1.0 << " " << std::isnan(1.0) << endl; // nan이 아닐 경우 0 출력

	return 0;
}