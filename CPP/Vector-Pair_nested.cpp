/*
Pair inside Vector Example
*/

#include <iostream>
#include <vector>
#include <string>
void printVec(std::vector<std::pair<int, std::string>> &vec) {
	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i].first << " - "<< vec[i].second << std::endl;
	}
}
int Vector_Pair_Nested() {
	std::vector<std::pair<int, std::string>> v;
	std::cout << "Initially\n";
	printVec(v);
	v.push_back({ 1, "gautam" });
	v.push_back({ 2, "jee" });
	std::cout << "After\n";
	printVec(v);
	return (0);
}