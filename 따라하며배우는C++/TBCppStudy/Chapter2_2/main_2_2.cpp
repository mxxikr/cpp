#include <iostream>
#include <cmath> 
// cmath : ���� �Լ��� �����ϴ� ��� ����
#include <limits>
// limits : ������ Ÿ���� �ּڰ��� �ִ��� �����ϴ� ��� ����

int main()
{
	using namespace std;
	
	short s = 1;
	int i = 1;
	long l = 1;
	long long ll = 1;

	cout << sizeof(short) << endl; // 2 bytes = 2 * 8 bits = 16 bits
	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl; // (2^16 - 1(��ȣ ��Ʈ)) - 1(0�� ǥ��) = 32767
	cout << std::numeric_limits<short>::max() << endl; // ���������� �ִ� �� ���
	cout << std::numeric_limits<short>::min() << endl; // ���������� �ּ�	�� ���
	cout << std::numeric_limits<short>::lowest() << endl; // ���������� �ּ� �� ���


	cout << sizeof(int) << endl; //	4 bytes = 2 * 4 bits = 32 bits
	cout << sizeof(long) << endl; // 4����Ʈ
	cout << sizeof(long long) << endl; // 8����Ʈ

	s = numeric_limits<short>::min();
	//s = s + 1; // 32767 ( ++s, s++, s += 1, s = s + 1)
	s = s - 1; // 32767 ( --s, s--, s -= 1, s = s - 1)

	cout << s << endl; // overflow ���� �߻�
	unsigned int k = -1; // unsigned ������ ������ -1�� �����ϸ� �ִ��� �����
	cout << std::numeric_limits<unsigned int>::max() << endl;
	cout << k << endl;

	cout << 22 / 4 << endl; // 5 ��� -> ���� ������ ������ ������ ����
	cout << (float)22 / 4 << endl; // 5.5 ��� -> �Ǽ� ������ ������ �Ǽ��� ����

	return 0;
}