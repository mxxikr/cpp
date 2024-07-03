#include <iostream> // cout, cin, endl
#include <cstdio> // printf

int main() {
	using namespace std;
	
	int x = 1024;
	double pi = 3.141592;

	cout << "I love this lecture!\n"; // << std::endl;
	cout << "x is " << x << " pi is " << pi << endl;

	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef" << endl; // 줄맞춤

	cout << "\a"; // 소리 출력

	//printf("I love this lecture!\n");

	int x2 = 1;

	cout << "Before your input, x2 was " << x2 << endl;

	cin >> x2;
	
	cout << "Your input is " << x2 << endl;
	
	return 0;
}