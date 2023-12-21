#include <iostream>
#include <string>

int main(void) {
	char rom_rock[10];
	char jul_rock[10];
	std::cout << "로미오>>";
	std::cin >> rom_rock;

	std::cout << "줄리엣>>";
	std::cin >> jul_rock;

	if (rom_rock == "바위" && jul_rock == "가위") { std::cout << "로미오가 이겼습니다"; }
	return 0;
}