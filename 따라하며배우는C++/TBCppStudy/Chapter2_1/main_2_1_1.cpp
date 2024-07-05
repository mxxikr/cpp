//	<iostream> 헤더 파일 선언
#include <iostream>
// <bitset> 헤더 파일 선언
// bitset은 비트 단위로 조작할 수 있는 컨테이너 클래스
#include <bitset>	

int main() //	main 함수 시작
{	
	using namespace std;	// std namespace 사용

	int j = 3; // int형 변수 j 선언 및 초기화	
	int i = -1; // int형 변수 i 선언 및 초기화
	int k = 123; // int형 변수 k 선언 및 초기화
	char a = '65'; // char형 변수 a 선언 및 초기화

	/* 
	uintptr_t: 포인터 크기의 정수형
	static_cast : 형변환 연산자
	& : 주소 연산자
	(uintptr_t)static_cast<void*>(&j) : j의 주소를 uintptr_t로 형변환하여 출력
	*/
	cout << "j의 주소는 : " << (uintptr_t)static_cast<void*>(&j) << endl; // j의 주소 출력
	cout << "i 주소는 : " << (uintptr_t)static_cast<void*>(&i) << endl; // i의 주소 출력
	cout << "k 주소는 : " << (uintptr_t)static_cast<void*>(&k) << endl; // k의 주소 출력
	cout << "a 주소는 : " << (uintptr_t)static_cast<void*>(&a) << endl; // a의 주소 출력

	return 0; // 0을 반환하며 main 함수 종료
}