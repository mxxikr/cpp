#include <iostream>
#include <iomanip>
// iomanip : ����� ��Ʈ�� �����ڸ� ����ϱ� ���� ��� ����
#include <limits> 
// limits : ������ Ÿ���� �ּڰ��� �ִ��� �˾Ƴ��� ���� ��� ����

int main_2()
{
	using namespace std;

	float f(123456789.0f); // 10 significant digits
	cout << std::setprecision(9);
	cout << "f : " << f << endl;

	cout << std::setprecision(16); // �Ҽ��� ���� 16�ڸ����� ǥ���ϵ��� ����
	cout << 1.0 / 3.0 << endl; // 0.333333 ���


	double d1(0.1);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	cout << "d1 : " << d1 << endl;
	cout << "d2 : " << d2 << endl;
	cout << std::setprecision(17);
	cout << "d1 : " << d1 << endl;
	cout << "d2 : " << d2 << endl;
	return 0;
}