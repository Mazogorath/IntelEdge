#include <iostream>

int whosbigger(int a, int b);
void isit3mul(int n);

int main(void) {
	unsigned int a = 0, b = 0, n = 0;

	std::cout << "서로 다른 정수를 2개 입력해주세요";
	std::cin >> a >> b;

	n = whosbigger(a, b);
	std::cout << a << "와 " << b << "중 " << n << "이 더 큽니다" << '\n';

	isit3mul(n);

	return 0;
}

int whosbigger(int a, int b) {
	if (a >= b) return a;
	else return b;
}
void isit3mul(int n) {
	if (n % 3 == 0) std::cout << n << "은 3의 배수입니다.";
	else std::cout << n << "은 3의 배수가 아닙니다.";
}