#include <iostream>

using namespace std;

void doSomething(int x)
{
	x = 123;
	cout << x << " " << &x << endl; // 123
}

int main_ex()
{
	int x = 0;
	cout << x << endl; // 0
	doSomething(x);
	cout << x << endl; // 0

	return 0;
}