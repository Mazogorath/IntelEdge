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

	fin.seekg(0, ios::end);
	int fileSize = fin.tellg();

	for (int i = 0; i < fileSize; i++) {
		fin.seekg(fileSize - 1 - i, ios::beg);
		int ch = fin.get();
		fout.put(ch);
	}
	cout << "���� �Ϸ�" << endl;

	fin.close();
	fout.close();
}
	