#include <iostream>

int whosbigger(int a, int b);
void isit3mul(int n);

int main(void) {
	unsigned int a = 0, b = 0, n = 0;

	std::cout << "���� �ٸ� ������ 2�� �Է����ּ���";
	std::cin >> a >> b;

	n = whosbigger(a, b);
	std::cout << a << "�� " << b << "�� " << n << "�� �� Ů�ϴ�" << '\n';

	isit3mul(n);

	return 0;
}

int whosbigger(int a, int b) {
	if (a >= b) return a;
	else return b;
}
void isit3mul(int n) {
	if (n % 3 == 0) std::cout << n << "�� 3�� ����Դϴ�.";
	else std::cout << n << "�� 3�� ����� �ƴմϴ�.";
}