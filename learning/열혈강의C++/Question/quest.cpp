#include <iostream>

/*
* ���� 1.
* ����ڷκ��� �� 5���� ������ �Է� �޾Ƽ�, �� ���� ����ϴ� ���α׷��� �ۼ��� ����.
* �� ���α׷��� ������ ������ ���� �̷������ �Ѵ�.
*/
void question_1() {
	int val1, val2, val3, val4, val5;

	std::cin >> val1 >> val2 >> val3 >> val4 >> val5;
	std::cout << "1��° ���� �Է�: " << val1 << std::endl;
	std::cout << "2��° ���� �Է�: " << val2 << std::endl;
	std::cout << "3��° ���� �Է�: " << val3 << std::endl;
	std::cout << "4��° ���� �Է�: " << val4 << std::endl;
	std::cout << "5��° ���� �Է�: " << val5 << std::endl;

	std::cout << "�հ�: " << val1 + val2 + val3 + val4 + val5 << std::endl;
};

/*
* ���� 2.
* ���α׷� ����ڷκ��� �̸��� ��ȭ��ȣ�� ���ڿ��� ���·� �Է� �޾Ƽ�, �Է¹��� �����͸� �״�� ����ϴ� ���α׷��� �ۼ��غ���.
*/
void question_2() {
	char name[100];
	char phone_number[200];

	std::cin >> name >> phone_number;
	std::cout << "�̸�: " << name << std::endl;
	std::cout << "�޴��� ��ȣ: " << phone_number << std::endl;
};


/*
* ���� 3.
* ���� �ϳ��� �Է� �޾Ƽ� �� ���ڿ� �ش��ϴ� �������� ����ϴ� ���α׷��� �ۼ��� ����.
* ���� ��� ����ڰ� 5�� �Է��Ѵٸ� �����ܿ��� 5���� ����ؾ��Ѵ�.
*/
void question_3() {
	int gugu;

	std::cin >> gugu;

	for (int num = 1; num <= gugu; num++) {
		std::cout << gugu << " * " << num << " = " << gugu * num << std::endl;
	}
};

/*
* ���� 4.
* �Ǹſ����� �޿� ��� ���α׷��� �ۼ��� ����.
* �� ȸ��� ��� �Ǹſ����� �Ŵ� 50������ �⺻ �޿��� ��ǰ �Ǹ� ������ 12%�� �ش��ϴ� ���� �����Ѵ�.
* ���� �� �μ���� ģ���� �̹��� ��ǰ �Ǹ� �ݾ��� 100�����̶��, 50+100*0.12=62
* ���� 62������ �޿��� ���� �޴´�.
* ��, �Ʒ��� ������ ������ ���̵��� �̷��� �޿��� ����� -1�� �Է� �� ������ ��� �Ǿ���Ѵ�.
*/
void question_4() {
	int sell;

	std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end) : ";
	std::cin >> sell;

	double result = 50 + sell * 0.12;
	if (result != -1) {
		std::cout << "�̹��� �޿�: " << result << "����" << std::endl;
	}
}

int main() {
	question_1();
	question_2();
	question_3();
	question_4();
	return 0;
}
