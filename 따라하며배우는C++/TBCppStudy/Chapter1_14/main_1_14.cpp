#include <iostream>
#include <algorithm>

using namespace std;

#define MY_NUMBER "Hello, World" // ��ũ�� : �ڵ忡�� MY_NUMBER ���ڸ� ������ 9�� ��ü
#define MAX(a, b) ((a > b) ? a : b) // ��ũ�� : �ڵ忡�� MAX(a, b)�� ������ a�� b �� ū ���� ��ȯ
#define LIKE_APPLE // define�� ��������� define�� ����� ���ϸ� �ش�

void doSomething();

int main()
{
	doSomething();
	cout << MY_NUMBER << endl;	
	cout << MAX(3, 4) << endl;
	cout << std::max(1 + 4, 4) << endl;

	return 0;
}