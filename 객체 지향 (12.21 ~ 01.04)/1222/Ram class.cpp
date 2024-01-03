#include <iostream>
using namespace std;

class Ram {
	char mem[100 * 20];
	int size;
public:
	Ram() { mem[100 * 15] = { 0 }; size = 1; } //100*1024�� 100*15�� ����
	~Ram() { cout << "�Ҹ���"; }
	char read(int address) { return mem[address]; }
	void write(int address, char value) { mem[address] = value; }
};
int main(void) {
	Ram ram;
	ram.write(10, 20);	//10������ 20 ����
	ram.write(11, 30);	//11������ 30 ����
	char res = ram.read(10) + ram.read(11);	//res == 50
	ram.write(12, res);	//12������ res ����
	cout << "12 ������ �� = " << (int)ram.read(12) << endl;
}