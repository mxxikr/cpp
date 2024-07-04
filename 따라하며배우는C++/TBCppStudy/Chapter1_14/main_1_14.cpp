#include <iostream>
#include <algorithm>

using namespace std;

#define MY_NUMBER "Hello, World" // 매크로 : 코드에서 MY_NUMBER 문자를 만나면 9로 교체
#define MAX(a, b) ((a > b) ? a : b) // 매크로 : 코드에서 MAX(a, b)를 만나면 a와 b 중 큰 값을 반환
#define LIKE_APPLE // define의 영향범위는 define이 선언된 파일만 해당

void doSomething();

int main()
{
	doSomething();
	cout << MY_NUMBER << endl;	
	cout << MAX(3, 4) << endl;
	cout << std::max(1 + 4, 4) << endl;

	return 0;
}