#include <iostream>
#include <cmath>
// cmath : ���� �Լ��� ����ϱ� ���� ��� ����


int main_3() {

	using namespace std;

	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << " " << std::isinf(posinf) << endl; // ���Ѵ��� ��� 1
	cout << neginf << " " << std::isinf(neginf) << endl; // ���Ѵ��� ��� 1
	cout << nan << " " << std::isnan(nan) << endl; // nan�� ��� 1
	cout << 1.0 << " " << std::isnan(1.0) << endl; // nan�� �ƴ� ��� 0 ���

	return 0;
}