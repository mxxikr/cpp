//	<iostream> ��� ���� ����
#include <iostream>
// <bitset> ��� ���� ����
// bitset�� ��Ʈ ������ ������ �� �ִ� �����̳� Ŭ����
#include <bitset>	

int main() //	main �Լ� ����
{	
	using namespace std;	// std namespace ���

	int j = 3; // int�� ���� j ���� �� �ʱ�ȭ	
	int i = -1; // int�� ���� i ���� �� �ʱ�ȭ
	int k = 123; // int�� ���� k ���� �� �ʱ�ȭ
	char a = '65'; // char�� ���� a ���� �� �ʱ�ȭ

	/* 
	uintptr_t: ������ ũ���� ������
	static_cast : ����ȯ ������
	& : �ּ� ������
	(uintptr_t)static_cast<void*>(&j) : j�� �ּҸ� uintptr_t�� ����ȯ�Ͽ� ���
	*/
	cout << "j�� �ּҴ� : " << (uintptr_t)static_cast<void*>(&j) << endl; // j�� �ּ� ���
	cout << "i �ּҴ� : " << (uintptr_t)static_cast<void*>(&i) << endl; // i�� �ּ� ���
	cout << "k �ּҴ� : " << (uintptr_t)static_cast<void*>(&k) << endl; // k�� �ּ� ���
	cout << "a �ּҴ� : " << (uintptr_t)static_cast<void*>(&a) << endl; // a�� �ּ� ���

	return 0; // 0�� ��ȯ�ϸ� main �Լ� ����
}