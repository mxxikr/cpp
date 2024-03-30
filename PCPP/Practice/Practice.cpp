//======================================================================================================================
// PCPP 동호회 예제 0번입니다.
// 글자를 출력하는 것에 대한 설명입니다
// 여기에 있는 모든 내용을 이해할 수 없더라도,
// 기록으로서 예제를 드리는 부분입니다.
//======================================================================================================================
// Practice_Deep.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	// 변수의 초기화 유무는 매우 중요한 문제입니다.
	int scopeValue0;
	int scopeValue1 = 100;
	int* scopeValueViewer = &scopeValue0;

	printf("%llX / %llX / %i \n", &scopeValueViewer, scopeValueViewer, *scopeValueViewer);

	scopeValue0 = scopeValue1;

	printf("%llX / %llX / %i \n", &scopeValueViewer, scopeValueViewer, *scopeValueViewer);

	// 모던 문법에서 배열을 경계의 구분없이 접근하는 것을 UB로 바라봅니다.
	// 하지만 메모리 측면에서 4byte의 연속된 메모리임에는 아무런 차이점이 없습니다.
	// 이것을 어떻게 볼 지는 자유입니다.
	char scopeAlloc[4];
	int* scopeAllocValue = ( int* ) scopeAlloc;// scopeAlloc 0번의 주소값으로부터 4Byte를 정수형으로 보겠다는 선언

	printf("%llX / %llX / %llX / %lld \n", scopeAlloc, scopeAllocValue, *scopeAllocValue, *scopeAllocValue);

	scopeAlloc[2] = 0xFF;

	printf("%llX / %llX / %llX / %lld \n", scopeAlloc, scopeAllocValue, *scopeAllocValue, *scopeAllocValue);

	scopeAlloc[1] = 0xFF;

	printf("%llX / %llX / %llX / %lld \n", scopeAlloc, scopeAllocValue, *scopeAllocValue, *scopeAllocValue);

	*scopeAllocValue = 0;

	printf("%llX / %llX / %llX / %lld \n", scopeAlloc, scopeAllocValue, *scopeAllocValue, *scopeAllocValue);
}