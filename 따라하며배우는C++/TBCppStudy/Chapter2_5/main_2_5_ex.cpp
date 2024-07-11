#include <iostream>

/*
* 과학적 표기법 사용해서 바꿔보기
* 3.141592
* 31.41
* 0.001000
* 123.0002
* 0.0000000001
* 234560000.000
*/
int main_ex()
{
	using namespace std;
	
	cout << 3.141592e1 << endl; // 31.4159
	cout << 31.41e-1 << endl; // 3.141
	cout << 0.001000e4 << endl; // 10
	cout << 123.0002e-2 << endl; // 1.23
	cout << 0.0000000001e10 << endl; // 1
	cout << 234560000.000e-3 << endl; // 234560

	return 0;
}