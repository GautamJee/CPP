/*
input : 32
output: 17
ie. count of (29, 27, 25, 23, 21, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 0)
*/

#include <iostream>
int getdigit(int n) {
	int res = 0;
	while (n != 0) {
		res = n % 10;
		n /= 10;
	}
	return res;
}
int getSolution(int n) {
	int count = 0;
	int temp = 0;
	temp = getdigit(n);
	while (temp != 0)
	{
		n = n - temp;
		temp = getdigit(n);
		count++;
	}
	return count;
}
int countTillZero()
{
	int N;
	std::cin >> N;
	std::cout << getSolution(N);
	return 0;
}