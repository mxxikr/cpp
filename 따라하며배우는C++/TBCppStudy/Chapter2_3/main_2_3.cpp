#include <iostream>
#include <cstdint> 
// cstdint : ���� �ʺ� ������ �����ϴ� ��� ����

int  main()
{
	using namespace std;
	// ���� �ʺ� ���� : ������ Ÿ���� ũ�⸦ ��Ȯ�� �����ϴ� ������ ������ Ÿ��
	std::int16_t i(5); // 16bits = 2 bytes �����ͷ� ����
	std::int8_t myint = 65; // 8bits = 1 byte �����ͷ� ����

	cout << myint << endl; // char������ ���

	std::int_fast8_t fi(5); // 8bits = 1 byte �����ͷ� ����
	std::int_least64_t fl(5); // 64bits = 8 bytes �����ͷ� ����

	return 0;
}