// https://www.hackerrank.com/challenges/cpp-class-template-specialization/problem

#include <iostream>
#include <string>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;

// Define specializations for the Traits class template here.
template <>
class Traits<Fruit>
{
private:
    enum f { apple, orange, pear };
 public:
    static char* name(int a)
    {
        return (f)a;
    }
};
template <>
class Traits<Color>
{
    public:
    static string name(int a)
    {
        return "a";
    }
};

int main()
{
    int t = 0; std::cin >> t;

    for (int i = 0; i != t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}