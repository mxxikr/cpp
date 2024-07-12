#include <iostream>
#include <sstream>  // sstream : ���ڿ���Ʈ���� ����ϱ� ���� ��� ����
#include <iomanip> // iomanip : ����� ���� ���� �������

/*
* ASCII Table�� �ִ� �������� ���ڵ��� cin, cout���� ������ϱ�
*/

// ���ڸ� ���ڷ� ��ȯ �Լ�
char intToChar(int i)
{
	return static_cast<char>(i);
}

// ������ 16������ ��ȯ�ϴ� �Լ�
std::string intToHex(int i)
{
	std::stringstream ss; // ���ڿ� ��Ʈ�� ��ü ����
	ss << std::hex << std::uppercase << i; // ��Ʈ���� 16���� �������� ��ȯ�� ���� �߰�
	// std::hex 16���� �������� ��ȯ�ϱ� ���� ������, std::uppercase 16���� ���ڸ� �빮�ڷ� ��ȯ�ϱ� ���� ������
	return ss.str(); // ��Ʈ���� �ִ� ���ڿ��� ��ȯ
}

int main_ex() {
	using namespace std;

	// 0 ~ 127���� ���� ���
	for (int i = 0; i < 128; i++)
	{	
		cout << "Decimal : " << i << ", Char : " << intToChar(i) << ", Hex : " << intToHex(i) << endl;
	}

	// ����ڷκ��� �Է¹��� ���ڸ� ���ڿ� 16������ ��ȯ
	int i;
	cin >> i;
	cout << "Decimal : " << i << ", Char : " << intToChar(i) << ", Hex : " << intToHex(i) << endl;

	return 0;
}