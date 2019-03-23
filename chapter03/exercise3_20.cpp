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
	int temp;
	vector<int> v1;
	while (cin >> temp)
		v1.push_back(temp);
	for (decltype(v1.size()) i = 0; i < v1.size() - 1; i++)
		cout << v1[i] + v1[i + 1] << endl;
	return 0;
}
