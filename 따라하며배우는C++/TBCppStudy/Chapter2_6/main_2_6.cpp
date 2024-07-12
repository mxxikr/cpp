#include <iostream>

/*
* 두개의 숫자가 같은지 다른지 비교하는 함수
*/
bool isEqual(int a, int b)
{
	//if (a == b)
	//	return true;
	//else
	//	return false;
	bool result = (a == b); // a와 b가 같으면 true, 다르면 false

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

	// boolalpha : bool 타입의 값을 true, false로 출력
	cout << std::boolalpha; 
	cout << b3 << endl;
	cout << b1 << endl;

	// noboolapha : bool 타입의 값을 1, 0으로 출력
	cout << std::noboolalpha; 
	cout << b3 << endl;
	cout << b1 << endl;
	
	// ! : NOT 연산자
	cout << !b3 << endl; 
	cout << !b1 << endl;
	cout << !true << endl;
	cout << !false << endl;
	// && : AND 연산자 - 둘 다 참일 때 참
	cout << (true && true) << endl; 
	cout << (true && false) << endl;
	cout << (false && false) << endl;
	cout << (false && true) << endl;

	// || : OR 연산자 - 둘 중 하나만 참이어도 참
	cout << (true || true) << endl; 
	cout << (true || false) << endl;
	cout << (false || false) << endl;
	cout << (false || true) << endl;

	// if 조건문 : 조건이 참일 때 실행
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

	if (5) // 0이 아닌 모든 값은 참
		cout << "true" << endl;
	else
		cout << "false" << endl;

	bool b;

	cin >> b;
	cout << "Your input : " << b << endl;

	return 0;
}