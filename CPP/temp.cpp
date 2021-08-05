#include <iostream> // header file includes every Standard library
#include <vector>
#include <algorithm>
using namespace std;

int temp() {

	int n = 0, k, x;
	cin >> n >> k;
	std::vector<int> a;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		a.push_back(x);
	}
	vector<int> min;
	int i = 0;
	while (k>=0 && i<n)
	{
		a[i] = a[i] + a[i + 1];
		a[i + 1] = a[i] + a[i + 1];
		min.push_back(*min_element(a.begin(), a.end()));
		i++;
		k--;
	}
	int out=*max_element(min.begin(), min.end());
	cout << ( out % 1000000007);
	return 0;
}

