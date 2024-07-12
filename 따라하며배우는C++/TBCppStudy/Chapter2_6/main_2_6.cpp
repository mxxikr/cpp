#include <iostream>

/*
* �ΰ��� ���ڰ� ������ �ٸ��� ���ϴ� �Լ�
*/
bool isEqual(int a, int b)
{
	//if (a == b)
	//	return true;
	//else
	//	return false;
	bool result = (a == b); // a�� b�� ������ true, �ٸ��� false

	return result;
}

int main_()
{
	using namespace std;

	bool b1 = true; // copy initialization
	bool b2(false); // direct initialization
	bool b3{ true }; // uniform initialization
	b3 = false;
	
	cout << b3 << endl;
	cout << b1 << endl;

	// boolalpha : bool Ÿ���� ���� true, false�� ���
	cout << std::boolalpha; 
	cout << b3 << endl;
	cout << b1 << endl;

	// noboolapha : bool Ÿ���� ���� 1, 0���� ���
	cout << std::noboolalpha; 
	cout << b3 << endl;
	cout << b1 << endl;
	
	// ! : NOT ������
	cout << !b3 << endl; 
	cout << !b1 << endl;
	cout << !true << endl;
	cout << !false << endl;
	// && : AND ������ - �� �� ���� �� ��
	cout << (true && true) << endl; 
	cout << (true && false) << endl;
	cout << (false && false) << endl;
	cout << (false && true) << endl;

	// || : OR ������ - �� �� �ϳ��� ���̾ ��
	cout << (true || true) << endl; 
	cout << (true || false) << endl;
	cout << (false || false) << endl;
	cout << (false || true) << endl;

	// if ���ǹ� : ������ ���� �� ����
	if (false)
		cout << "This is true" << endl;
	else
		cout << "This is false" << endl;


	if (3 > 1) 
	{ 
		cout << "This is true" << endl;
		cout << "3 is greater than 1" << endl;
	}
	else
	{
		cout << "This is false" << endl;
	}

	cout << std::boolalpha;
	cout << isEqual(1, 1) << endl;
	cout << isEqual(0, 3) << endl;

	if (5) // 0�� �ƴ� ��� ���� ��
		cout << "true" << endl;
	else
		cout << "false" << endl;

	bool b;

	cin >> b;
	cout << "Your input : " << b << endl;

	return 0;
}