#include <iostream>

void doSomething()
{
	using namespace std;
	// #if, #ifdef, #ifndef, #endif
	// #if : 조건이 참이면 코드를 컴파일
	// #ifdef : 매크로가 정의되어 있으면 코드를 컴파일
	// #ifndef : 매크로가 정의되어 있지 않으면 코드를 컴파일
	// #endif : #if, #ifdef, #ifndef와 짝을 이루어 사용	
#ifdef LIKE_APPLE // LIKE_APPLE 이라는 매크로가 정의되어 있을 경우
	cout << "Apple" << endl;
#endif

#ifndef LIKE_APPLE 
	cout << "Orange" << endl;
#endif
}