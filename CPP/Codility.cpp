/*
Codility Demo

Write a function :

class Solution { public int solution(int[] A); }

that, given an array A of N integers, returns the smallest positive integer(greater than 0) that does not occur in A.

For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.

Given A = [1, 2, 3], the function should return 4.

Given A = [−1, −3], the function should return 1.

Write an efficient algorithm for the following assumptions :

N is an integer within the range[1..100, 000];
each element of array A is an integer within the range[−1, 000, 000..1, 000, 000]. */

#include <vector>
#include<algorithm>
#include <iostream>

using namespace std;
int findsmallest(std::vector<int> vec, int n)
{
	for (int i = 1; i <= n + 1; i++)
		if (std::find(vec.begin(), vec.end(), i) == vec.end())
		{
			return i;
		}
	return 0;
}
int s()
{
	int n, x;
	std::vector<int> arr;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> x;
		arr.push_back(x);
	}
	std::cout << findsmallest(arr, n);
	return 0;
}