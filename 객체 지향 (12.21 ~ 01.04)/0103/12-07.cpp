#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(void) {

	ifstream fin("C:\\windows\\system.ini");
	if (!fin) {
		cout << "읽기 실패";
		return 0;
	}
	ofstream fout("C:\\temp\\system.txt");
	if (!fout) {
		cout << "temp 읽기 실패";
		return 0;
	}

	fin.seekg(0, ios::end);
	int fileSize = fin.tellg();

	for (int i = 0; i < fileSize; i++) {
		fin.seekg(fileSize - 1 - i, ios::beg);
		int ch = fin.get();
		fout.put(ch);
	}
	cout << "복사 완료" << endl;

	fin.close();
	fout.close();
}
	