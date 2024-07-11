#include <iostream>
#include <iomanip>
// iomanip : ����� ��Ʈ�� �����ڸ� ����ϱ� ���� ��� ����
#include <limits> 
// limits : ������ Ÿ���� �ּڰ��� �ִ��� �˾Ƴ��� ���� ��� ����

int main()
{
	using namespace std;

	float f(3.141592f);
	double d(3.141592);
	long double ld(3.141592);

	cout << sizeof(f) << endl; // float�� ������ ũ�� ���
	cout << numeric_limits<float>::max() << endl; // float�� ������ �ִ� ���
	cout << numeric_limits<float>::min() << endl; // float�� ������ �ּڰ� ��� - min : ǥ���� �� �ִ� ���� ���� ���� ���� ��
	cout << numeric_limits<float>::lowest() << endl << endl; // float�� ������ �ּڰ� ��� - 	// lowest : ǥ���� �� �ִ� ���� ���� ��

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