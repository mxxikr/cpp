#include <iostream>
#include <cmath>

/*
두 부동 소수점 수 a와 b가 주어진 허용 오차 epsilon 내에서 거의 같은지 확인
*/
bool nearly_equal(double a, double b, double epsilon) {
    return std::fabs(a - b) < epsilon; // 두 수의 차이가 허용 오차 값보다 작으면 두 수는 거의 같다고 간주
}

int main_ex_2() {
    double x = 0.1 + 0.2; // 부동 소수점 연산의 특성상 0.3과 정확히 같지 않을 수 있음
    double y = 0.3;

    if (nearly_equal(x, y, 1e-10)) { // 0.0000000001 오차 내에서 거의 같은지 확인
        std::cout << "x and y are nearly equal." << std::endl; // true 반환 시 거의 같다고 간주
    }
    else {
        std::cout << "x and y are not equal." << std::endl; // false 반환 시 다르다고 간주
    }

    return 0;
}