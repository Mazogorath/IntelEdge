#include <iostream>
#include <string>

int main(void) {
	char rom_rock[10];
	char jul_rock[10];
	std::cout << "�ι̿�>>";
	std::cin >> rom_rock;

	std::cout << "�ٸ���>>";
	std::cin >> jul_rock;

	if (rom_rock == "����" && jul_rock == "����") { std::cout << "�ι̿��� �̰���ϴ�"; }
	return 0;
}