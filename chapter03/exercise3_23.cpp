#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<int> v1{ 1,2,3,4,5,6,7,8,9,10 };
	for (auto i = v1.begin(); i != v1.end(); ++i)
		*i *= 2;
	for (auto &j : v1)
		cout << j << endl;
	return 0;
}
