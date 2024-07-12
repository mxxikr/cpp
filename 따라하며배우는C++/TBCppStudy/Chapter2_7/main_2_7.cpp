#include <iostream>
#include <limits>

int main()
{

	using namespace std;
	
	char c1(65); 
	char c2('A'); // ���� �ϳ� ǥ���� ���� single quotation(���� ����ǥ) ���

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;
	
	// c style casting
	cout << (char)65 << endl; // A
	cout << (int)'A' << endl; // 65

	// c++ style casting
	cout << char(65) << endl; // A
	cout << int('A') << endl; // 65

	// static_cast - ������ ��ȯ���� �ʴ� ������ casting ���, ���� ������ �ִ� ���� �ٲ����� ����
	cout << static_cast<char>(65) << endl; // A
	cout << static_cast<int>('A') << endl; // 65

	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl; // static_cast�� ���� ��� ����
	cout << ch << endl;

	char c3(65); // �ѱ��ڸ� ���� �� �ִ� ������

	cin >> c3;
	cout << c3 << " " << static_cast<int>(c3) << endl; // ���� ���� �Է��ص� ù ���ڸ� ����
	// ������ ���ڴ� ���ۿ� ��������
	cin >> c3;
	cout << c3 << " " << static_cast<int>(c3) << endl; // ������ ���� ����

	cin >> c3;
	cout << c3 << " " << static_cast<int>(c3) << endl;

	cin >> c3; // ���ۿ� �����ִ� ���ڰ� ��� �Է� ���
	cout << c3 << " " << static_cast<int>(c3) << endl;

	// escape sequence : Ư���� ���ڸ� ����� �� ���
	cout << sizeof(char) << endl;
	cout << (int)std::numeric_limits<char>::max() << endl; // ��� �ƽ�Ű ĳ���Ͱ� ��� �ƽ�Ű ���ڸ� ȭ�鿡 ����� �� ����
	cout << (int)std::numeric_limits<char>::lowest() << endl;

	cout << sizeof(unsigned char) << endl; // ��� ���� ǥ���� �� ����
	cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;

	// \n : �ٹٲ� ����, endl : �ٹٲް� ���ÿ� cout ���ۿ� �ִ� ���� ���� ���
	cout << "This is first line \nThis is second line" << endl;
	cout << "This is first line " << endl;
	cout << "This is second line" << endl;
	cout << "This is first line " << std::flush; // �ٹٲ� ���� cout ���ۿ� �ִ� ���� ���
	cout << int('\n') << endl; // 10 : new line
	cout << int('\t') << endl; // 9 : tab
	cout << "This is first line \tThis is second line" << endl;
	cout << "\"This is first line\? \a \tThis is second line\"" << endl;

	wchar_t c;
	char32_t c4; // �����ڵ� ���ڸ� ǥ���� �� ���

	return 0;
}