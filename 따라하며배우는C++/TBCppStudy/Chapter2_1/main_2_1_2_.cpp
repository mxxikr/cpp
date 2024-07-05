#include <iostream>

int main_2()
{
	using namespace std;
	
	bool bValue = false; 
	char chValue = 'A'; 
	float fValue = 3.141592f;
	double dValue = 3.141592;
	
	auto aValue = 3.141592; // ������ �� double�� �߷�
	auto aValue2 = 3.141592f; // ������ �� float�� �߷�


	cout << ((bValue) ? 1 : 0) << endl;
	cout << (int)chValue << endl;
	cout << chValue << endl;
	cout << bValue << endl; // false�� 0���� ���, true�� 1�� ���
	cout << fValue << endl;
	cout << dValue << endl;
	cout << aValue << endl;
	cout << aValue2 << endl;
	
	// sizeof : �޸��� ���� ũ�⸦ ��ȯ
	cout << sizeof(aValue) << endl; // 8����Ʈ
	cout << sizeof(aValue2) << endl; // 4����Ʈ
	cout << sizeof(bool) << endl;
	cout << sizeof(bValue) << endl;
	
	// �ʱ�ȭ ���
	int a = 123; // copy initialization
	int b(123); // direct initialization - ���� ���� ������ Ÿ���� �ʱ�ȭ�� �� ���� ����
	int c((int)3.14);
	int d{ 123 }; // uniform initialization - ���� ���� ������ Ÿ���� �ʱ�ȭ�� �� ���� ����, ������ Ÿ���� �ȸ����� ������ ���� �߻�

	int e, f; // ���� ���������� ��쿡 ���� ���� ���� ���� ����
	int g = 3, h = 4; // ���� ���������� ��쿡 ���� ���� ���� ���� �� �ʱ�ȭ ����
	int i, j = 4;
	int k = 0, l(456), m{ 123 };

	return 0;
}