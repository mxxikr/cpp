#include <iostream>

void doSomething()
{
	using namespace std;
	// #if, #ifdef, #ifndef, #endif
	// #if : ������ ���̸� �ڵ带 ������
	// #ifdef : ��ũ�ΰ� ���ǵǾ� ������ �ڵ带 ������
	// #ifndef : ��ũ�ΰ� ���ǵǾ� ���� ������ �ڵ带 ������
	// #endif : #if, #ifdef, #ifndef�� ¦�� �̷�� ���	
#ifdef LIKE_APPLE // LIKE_APPLE �̶�� ��ũ�ΰ� ���ǵǾ� ���� ���
	cout << "Apple" << endl;
#endif

#ifndef LIKE_APPLE 
	cout << "Orange" << endl;
#endif
}