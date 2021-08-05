#include <iostream>
#define LOG(x) std::cout << x << std::endl;

int Pointers() {
	char* buffer = new char[8];
	memset(buffer, 0, 8);
	return 0;
}