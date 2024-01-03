#include <iostream>
using namespace std;
#include <random>

class Random {
public:
	Random();
	int getNum();
	int getNumBetween(int x, int y);
};
Random::Random() {
	return;
}
int Random::getNum() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution <int> dis(0, RAND_MAX);
	return dis(gen);
}
int Random::getNumBetween(int x, int y) {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution <int> dis(x, y);
	return dis(gen);
}
int main(void) {
	unsigned int i = 0;
	Random r;
	for (i = 0; i < 10; i++) {
		unsigned int n = r.getNum();
		cout << n << ' ';
	}
	int oddeven;
	cout << endl << "È¦ÀÌ¸é 1, Â¦ÀÌ¸é 2" << endl;
	cin >> oddeven;
	for (i = 0; i < 10; i++) {
		unsigned int n = r.getNumBetween(2, 10);
		if (oddeven == 2) {
			if (n % 2 != 0) n += 1;
		}
		else {
			if (n % 2 == 0) n -= 1;
		}
		cout << n << ' ';
	}
	return 0;
}