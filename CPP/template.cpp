#include <iostream>
#include <string>
template <typename T>
T maxof(const T& a, const T& b) {
	return (a > b ? a : b);
}
int main() {
	std::string a="nine", b="seven";
	std::cout << "max of " << a << " and " << b << " is: " << maxof<std::string>(a, b) << std::endl;
	return 0;
}