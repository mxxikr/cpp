#include <iostream>

// �ƹ��� ����� ���� �� �Լ� ����
void my_function()
{

}

int main()
{
	// int �� ���� i ���� �� �ʱ�ȭ
	int i = 123;

	// float �� ���� f ���� �� �ʱ�ȭ
	float f = 123.456f;

	// void ������ ���� ����, void �����ʹ� � ������ Ÿ���� �ּҵ� ���� ����
	void* my_void;

	// void �����Ϳ� ������ ���� i�� �ּҸ� ����
	my_void = (void*)&i;
	std::cout << my_void << std::endl; // i�� ����� �޸� ��ġ ���

	// void �����Ϳ� �Ǽ��� ���� f�� �ּҸ� ����
	my_void = (void*)&f;
	std::cout << my_void << std::endl; // f�� ����� �޸� ��ġ ���

	// ������ Ÿ���̳� ����� �ٸ����� �������� �ּҸ� �����ϴµ� �ʿ��� ������ �����ϴ�.

	return 0;
}
