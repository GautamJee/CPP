//https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int variable_sized_array() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //std::cout << "Enter size of fixed array and total number of queries" << std::endl;
    int n, q;
    std::cin >> n >> q; // array size n & q queries
    std::vector<std::vector<int>> arr;
    int in_val = 0,ksize;
    for (; n > 0; n--)
    {
        std::vector<int> k;
        std::cin >> ksize;
        do {
            std::cin >> in_val;
            k.push_back(in_val);
        } while(--ksize);
        arr.push_back(k);
    }
    for (; q > 0; q--)
    {
        int i, j;
        std::cin >> i >> j;
        std::cout << arr[i][j] << std::endl;
    }
    return 0;
}