#include <iostream>
#include <string>
#include <vector>

template <typename T>
T maxof(const T& a, const T& b) {
	return (a > b ? a : b);
}

template <typename T>
constexpr T pi = T(3.1415926535897932385L);

template<typename T>
T area_of_circle(const T &r) {
	return r * r * pi<T>;
}

template <typename T>
void print_vector(const std::vector<T> &v) {
	if (v.empty())
		return;
	for (const T& i : v)
		std::cout << i << " ";
	std::cout << std::endl;
}

int template_program() {
	std::string a="nine", b="seven";
	std::cout << "max of " << a << " and " << b << " is: " << maxof<std::string>(a, b) << std::endl;
	
	int c = 9, d = 7;
	std::cout << "max of " << a << " and " << b << " is: " << maxof<int>(c, d) << std::endl;

	std::cout << pi<double> << std::endl;
	std::cout << area_of_circle<long double>(3) << std::endl;

	//argument deduction is automatic in template by compilers
	std::vector<std::string> v1 = { "hello","gautam","hi"};
	std::vector<int> v2 = { 1,4,2,6,7 };
	print_vector(v1);
	print_vector(v2);

	return 0;
}