#include <iostream>
#include <cmath>

/*
�� �ε� �Ҽ��� �� a�� b�� �־��� ��� ���� epsilon ������ ���� ������ Ȯ��
*/
bool nearly_equal(double a, double b, double epsilon) {
    return std::fabs(a - b) < epsilon; // �� ���� ���̰� ��� ���� ������ ������ �� ���� ���� ���ٰ� ����
}

int main_ex_2() {
    double x = 0.1 + 0.2; // �ε� �Ҽ��� ������ Ư���� 0.3�� ��Ȯ�� ���� ���� �� ����
    double y = 0.3;

    if (nearly_equal(x, y, 1e-10)) { // 0.0000000001 ���� ������ ���� ������ Ȯ��
        std::cout << "x and y are nearly equal." << std::endl; // true ��ȯ �� ���� ���ٰ� ����
    }
    else {
        std::cout << "x and y are not equal." << std::endl; // false ��ȯ �� �ٸ��ٰ� ����
    }

    return 0;
}