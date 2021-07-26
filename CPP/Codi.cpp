#include <vector>
#include<iostream>
using namespace std;
int codi()
{
	vector<int> A = { -1,1,3,3,3,2,3,2,1,0 };
	int N = A.size();
	//cout << N;
	int periods = 0;
	int d1 = 0, d2 = 0, found = 0;
	for (int i = 0; i < N; i++)
	{
		if (i + 1 < N)
		{
			if (found == 1)
			{
				if (d1 == (A[i] - A[i + 1]))
				{
					periods++;
					cout << "i:" << i << " A[i]:" << A[i] << " i+1: " << i + 1 << " A[i+1] " << A[i + 1] << endl;
				}
			}
			d1 = A[i] - A[i + 1];
			found = 1;
		}
	}
	cout << periods;
	return 0;
}