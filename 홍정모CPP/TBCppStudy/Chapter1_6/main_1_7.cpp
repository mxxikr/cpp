#include <iostream>

using namespace std;

int main()
{
	int x(0);
	cout << x << " " << &x << endl; // x�� �޸� �ּ� �� ���

	{
		x = 1; // x ���Ҵ�
		cout << x << " " << &x << endl; // x�� �޸� �ּ� �� ���

		int x = 3;  // ���� ����
		cout << x << " " << &x << endl; // ���� ���� x�� �޸� �ּ� �� ���
	}
	cout << x << " " << &x << endl; // x�� �޸� �ּ� �� ���

	{
		int x = 2; // ���� ����
		cout << x << " " << &x << endl; // ���� ���� x�� �޸� �ּ� �� ���
	}

	return 0;
}