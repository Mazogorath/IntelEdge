#include <iostream>
using namespace std;

class Ram {
	char mem[100 * 20];
	int size;
public:
	Ram() { mem[100 * 15] = { 0 }; size = 1; } //100*1024를 100*15로 줄임
	~Ram() { cout << "소멸자"; }
	char read(int address) { return mem[address]; }
	void write(int address, char value) { mem[address] = value; }
};
int main(void) {
	Ram ram;
	ram.write(10, 20);	//10번지에 20 저장
	ram.write(11, 30);	//11번지에 30 저장
	char res = ram.read(10) + ram.read(11);	//res == 50
	ram.write(12, res);	//12번에지 res 저장
	cout << "12 번지의 값 = " << (int)ram.read(12) << endl;
}