#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(void) {

	ifstream fin("C:\\windows\\system.ini");
	if (!fin) {
		cout << "�б� ����";
		return 0;
	}
	ofstream fout("C:\\temp\\system.txt");
	if (!fout) {
		cout << "temp �б� ����";
		return 0;
	}
	int a = 0;
	fin.seekg(0, ios::end);
	int pointer = fin.tellg();
	fin.seekg(0, ios::beg);
	int seperator = pointer / 10;
	char* array = new char[seperator];
	cout << "���� ����" << endl;
	for (int i = 1; i < 11; i++) {
		fin.read(array, seperator);
		a = fin.gcount();
		fout.write(array, seperator);
		cout << "." << a << "B " << i*10 << "%" << endl;
	}
	cout << pointer << "B ���� �Ϸ�";
	delete[]array;
	fin.close();
	fout.close();

}