#include <iostream>

int main_2()
{
	using namespace std;
	
	bool bValue = false; 
	char chValue = 'A'; 
	float fValue = 3.141592f;
	double dValue = 3.141592;
	
	auto aValue = 3.141592; // 컴파일 시 double로 추론
	auto aValue2 = 3.141592f; // 컴파일 시 float로 추론


	cout << ((bValue) ? 1 : 0) << endl;
	cout << (int)chValue << endl;
	cout << chValue << endl;
	cout << bValue << endl; // false는 0으로 출력, true는 1로 출력
	cout << fValue << endl;
	cout << dValue << endl;
	cout << aValue << endl;
	cout << aValue2 << endl;
	
	// sizeof : 메모리의 공간 크기를 반환
	cout << sizeof(aValue) << endl; // 8바이트
	cout << sizeof(aValue2) << endl; // 4바이트
	cout << sizeof(bool) << endl;
	cout << sizeof(bValue) << endl;
	
	// 초기화 방법
	int a = 123; // copy initialization
	int b(123); // direct initialization - 직접 만든 데이터 타입을 초기화할 때 많이 쓰임
	int c((int)3.14);
	int d{ 123 }; // uniform initialization - 직접 만든 데이터 타입을 초기화할 때 많이 쓰임, 데이터 타입이 안맞으면 컴파일 오류 발생

	int e, f; // 같은 데이터형일 경우에 여러 개의 변수 선언 가능
	int g = 3, h = 4; // 같은 데이터형일 경우에 여러 개의 변수 선언 및 초기화 가능
	int i, j = 4;
	int k = 0, l(456), m{ 123 };

	return 0;
}