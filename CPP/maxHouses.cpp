#include <iostream>
#include <vector>
#include <algorithm>
int countMaxHouses() {
	static int T, N, B, count;
	std::cin >> T;
	for (int t = 0; t<T; t++) {
		std::cin >> N >> B;
		std::vector<int> A; 
		int input;
		for (int i = 0; i<N; i++)
		{
			std::cin >> input;
			A.push_back(input);
		}
		std::sort(A.begin(), A.end());
		count = 0;
		for (auto i : A) {
			if (B >= i) {
				B -= i;
				count++;
			}
			else
				break;
		}
		std::cout << count;
	}
	return 0;
}