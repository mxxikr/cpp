#include <iostream>

using namespace std;
int main() 
{
	int x(0);
	cout << x << " " << &x << endl; // x의 메모리 주소 값 출력

	{
		x = 1;
		cout << x << " " << &x << endl; // x의 메모리 주소 값 출력

		int x = 3;
		cout << x << " " << &x << endl; // x의 메모리 주소 값 출력
	}
	cout << x << " " << &x << endl; // x의 메모리 주소 값 출력

	{
		int x = 2;
		cout << x << " " << &x << endl; // x의 메모리 주소 값 출력
	}

	return 0;
}